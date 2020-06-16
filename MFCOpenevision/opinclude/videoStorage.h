#if !defined(_IVIDEO_STORAGE_HEADER_DEFINED)
#define _IVIDEO_STORAGE_HEADER_DEFINED

#include <new>
#include "EuresysException.h"
#include "videoStorage_api.h"

#ifdef __GNUC__
typedef void ( *FinalizeCallback)(int handle);
#else
typedef void (__stdcall *FinalizeCallback)(int handle);
#endif


namespace Euresys {    
    
    namespace VideoStorage {
    
		/** Exception specific to the video storage objects like MjpegAviWriter.

		Use the function What() to get a small description of the error.
		**/
		struct Exception : public Euresys::Exception
		{
        public:
	       Exception(const char *msg) : description(msg) {}

           const char * What() {
               return description;
           }
        private:
	       const char *description;
		};

        inline void CheckStatus(ActionResult &result) 
        {
            if(result.statuscode == E_EXCEPTION_BAD_ALLOCATION) {
                throw std::bad_alloc();
            } else if(result.statuscode == E_EXCEPTION_STORAGE) {
                throw Exception(result.description);
            } else if(result.statuscode == E_EXCEPTION_INTERNAL) {
                throw Exception("Internal exception");
            } else if(result.statuscode != 0) {
                throw Exception("Unknown exception");
            }
            
            return;
        }

        /** Video writer class to store efficiently compressed images.
        **/
        class VideoWriter 
        {
        public:
            VideoWriter() : handle_(0), callback_(0) {}
            VideoWriter(VideoWriterHandle xwriter) : writer(xwriter), handle_(0), callback_(0) {}
            
            virtual ~VideoWriter() {
                VideoWriter_Free(writer);
                if ((handle_ != 0) && (callback_ != NULL))
                  callback_(handle_);
            }
            
            
            /** Add a jpeg image in a MultiCam surface to the mjpeg file.
            
               The surface must contain a compressed image produced by a PICOLO.
              
               Returns the size of data written or 0 if maxsize was exceeded.
            **/
            virtual int AddImage(MCHANDLE hSurface) {
                UINT32 written = 0;
                ActionResult result;
                
                result = VideoWriter_AddImage(writer, hSurface, &written);
                CheckStatus(result);
                
                return written;
            }
            
            /** Finish the video file and close the file. **/
            virtual void Close() {
                ActionResult result;
                
                result = VideoWriter_Close_(writer);
                CheckStatus(result);
            }
            
        public:
            VideoWriterHandle writer;
            int handle_;
            FinalizeCallback callback_;
        };


        
        static VideoWriter *CreateAviWriter(const char *fileName, MCHANDLE channel, 
            unsigned int maxSizeInMB = 1024, unsigned int version = 0)
        {
            ActionResult result;
            VideoWriterHandle writer;
            
            result = CreateAviWriter_C(&writer, fileName, channel, maxSizeInMB, version);       
            CheckStatus(result);
            
            return new VideoWriter(writer);
        }

    };
};
#endif 





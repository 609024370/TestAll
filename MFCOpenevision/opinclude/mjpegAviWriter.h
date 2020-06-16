#if !defined(_IMJPEG_AVI_WRITER_HEADER_DEFINED)
#define _IMJPEG_AVI_WRITER_HEADER_DEFINED

#include <new>
#include "EuresysException.h"
#include "videoStorage.h"

namespace Euresys {    

    namespace VideoStorage {    

        /** MJPEG recorder class to store efficiently JPEG images produced by a 
            Picolo Jet-X in Motion JPEG AVI files.
    
          To create an mjpeg movie, first create a MjpegAviWriter with the 
          filename and the caracteristics of the video. Next add each frame with AddImage.
          When done, close the object and delete it.
        **/
    class MjpegAviWriter : public Euresys::VideoStorage::VideoWriter
        {
        public:
            /** MjpegAviWriter Constructor.
        
              The maximum size parameter can help application writers who want to limit 
              the size of the MJPEG. Applications can also use maxsize to set a maximum
              soft size smaller than the disk free space to improve chances of correclty 
              closing the AVI. For compatibility resons, one shouldn't create AVI's bigger
              than 1GB. The maximum size must be below 4GB.
          
              @param fileName File name for the MJPEG file
              @param width width of the images stored in the MJPEG
              @param height height of the images stored in the MJPEG
              @param announcedMicroSecondsPerImage expected time per image in micro-seconds. 
              @param maxSizeInKB maximum size in kilo-bytes of the MJPEG file. 
            **/
            MjpegAviWriter(const char *fileName, UINT32 width, UINT32 height, UINT32 announcedMicroSecondsPerImage, UINT32 maxSizeInKB = 1024*1024) {
                ActionResult result;
                
                result = MjpegAviWriter_Create(&writer, fileName, width, height, announcedMicroSecondsPerImage, maxSizeInKB);       
                CheckStatus(result);
                handle_ = 0;
                callback_ = 0;
            }
            
            virtual ~MjpegAviWriter() {}                       
        };
    }
}

#endif 





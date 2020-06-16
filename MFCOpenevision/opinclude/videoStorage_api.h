#if !defined(_VIDEO_STORAGE_API_HEADER_DEFINED_)
#define _VIDEO_STORAGE_API_HEADER_DEFINED_
#include <multicam.h> 

#ifndef VIDEOSTORAGE_STATIC_BUILD
# ifdef VIDEOSTORAGE_EXPORTS
#  define VIDEOSTORAGE_API __declspec(dllexport)
# elif defined(__BORLANDC__)
#  define VIDEOSTORAGE_API _import 
# elif defined(__GNUC__)
#  define VIDEOSTORAGE_API
# else
#  define VIDEOSTORAGE_API __declspec(dllimport)
# endif
#else
# define VIDEOSTORAGE_API
#endif

typedef void *  VideoWriterHandle;
typedef struct {
    UINT32 statuscode;
    const char *description;
    void *reserved1;
    void *reserved2;
} ActionResult;

#ifdef __cplusplus
extern "C" {
#endif

 ActionResult VIDEOSTORAGE_API VideoWriter_AddImage(VideoWriterHandle writer, MCHANDLE hSurface, UINT32 *written);

 ActionResult VIDEOSTORAGE_API VideoWriter_Close_(VideoWriterHandle writer);

 void VIDEOSTORAGE_API VideoWriter_Free(VideoWriterHandle writer);

 ActionResult VIDEOSTORAGE_API MjpegAviWriter_Create(VideoWriterHandle *writer, const char *fileName, UINT32 width, UINT32 height, 
     UINT32 announcedMicroSecondsPerImage, UINT32 maxSizeInKB = 1024*1024);

 ActionResult VIDEOSTORAGE_API CreateAviWriter_C(VideoWriterHandle *writer, const char *fileName, MCHANDLE channel, 
     UINT32 maxSizeInMB = 1024, UINT32 version = 0);
#ifdef __cplusplus
}
#endif



#define E_EXCEPTION_BAD_ALLOCATION        23000
#define E_EXCEPTION_INTERNAL              23001
#define E_EXCEPTION_STORAGE               23002

#endif


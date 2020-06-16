#ifndef __VIDEOSTORAGE_EXTERNC_INTERFACE_H__
#define __VIDEOSTORAGE_EXTERNC_INTERFACE_H__

#if defined __GNUC__
#define E_DLL0
#else
#if defined E_STATIC
#define E_DLL0
#elif defined E_DLL_EXPORT
#define E_DLL0 _declspec( dllexport )
#else
#define E_DLL0 _declspec( dllimport )
#endif
#endif //__GNUC__
#define E_DLL1




#ifdef E_EXTERN_C_BUILD

extern "C"
{
  E_DLL0 const char* E_DLL1 VideoWriter_AddImage_EuresysMultiCamSurface_INT32(void* impl, void* surface, int* retVal);
  E_DLL0 const char* E_DLL1 global_CreateAviWriter_ConstString_EuresysMultiCamChannel_UINT32_UINT32_VideoWriter(const char* fileName, void* channel, unsigned int maxSizeInMB, unsigned int version, void** retVal);
  E_DLL0 const char* E_DLL1 global_CreateAviWriter_ConstString_EuresysMultiCamChannel_UINT32_VideoWriter(const char* fileName, void* channel, unsigned int maxSizeInMB, void** retVal);
  E_DLL0 const char* E_DLL1 global_CreateAviWriter_ConstString_EuresysMultiCamChannel_VideoWriter(const char* fileName, void* channel, void** retVal);
  E_DLL0 const char* E_DLL1 VideoWriter_Close(void* impl);
#ifdef EVISION_CLR
  E_DLL0 void E_DLL1  VideoWriter_SetCallback(void** impl, [System::Runtime::InteropServices::MarshalAs(System::Runtime::InteropServices::UnmanagedType::FunctionPtr)]System::Delegate* callback, int handle);
#else
E_DLL0 void E_DLL1  VideoWriter_SetCallback(void** impl, void* callback, int handle);
#endif //EVISION_CLR
    E_DLL0 void E_DLL1 VideoWriter_GetWrapper(int* handle, void* impl);
  E_DLL0 const char* E_DLL1 VideoWriter_Dtor(void* impl);
}

#endif // E_EXTERN_C_BUILD
#endif // __VIDEOSTORAGE_EXTERNC_INTERFACE_H__

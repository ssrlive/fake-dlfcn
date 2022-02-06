#ifndef __FAKE_DL_FCN_H__
#define __FAKE_DL_FCN_H__

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(__arm__) || defined(__i386__)
#define LIB_STR "lib"
#define SYSTEM_LIB_PATH         "/system/lib/"
#define SYSTEM_VENDOR_LIB_PATH  "/system/vendor/lib"
#define VENDOR_LIB_PATH         "/vendor/lib"
#elif defined(__aarch64__) || defined(__x86_64__)
#define LIB_STR "lib64"
#define SYSTEM_LIB_PATH         "/system/lib64/"
#define SYSTEM_VENDOR_LIB_PATH  "/system/vendor/lib64"
#define VENDOR_LIB_PATH         "/vendor/lib64"
#else
#error "Arch unknown, please port me"
#endif

void *fake_dlopen(const char *filename, int flags);
void *fake_dlsym(void *handle, const char *symbol);
int fake_dlclose(void *handle);

#if defined(__cplusplus)
}
#endif

#endif // __FAKE_DL_FCN_H__

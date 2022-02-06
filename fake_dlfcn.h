#ifndef __FAKE_DL_FCN_H__
#define __FAKE_DL_FCN_H__

#if defined(__cplusplus)
extern "C" {
#endif

void *fake_dlopen(const char *filename, int flags);
void *fake_dlsym(void *handle, const char *symbol);
int fake_dlclose(void *handle);

#if defined(__cplusplus)
}
#endif

#endif // __FAKE_DL_FCN_H__

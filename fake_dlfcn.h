#ifndef __FAKE_DL_FCN_H__
#define __FAKE_DL_FCN_H__

#if defined(__cplusplus)
extern "C" {
#endif

struct fake_dl_ctx;

struct fake_dl_ctx *fake_dlopen(const char *filename, int flags);
void *fake_dlsym(struct fake_dl_ctx *handle, const char *symbol);
int fake_dlclose(struct fake_dl_ctx *handle);

#if defined(__cplusplus)
}
#endif

#endif // __FAKE_DL_FCN_H__

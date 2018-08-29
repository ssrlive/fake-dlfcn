void *fake_dlopen(const char *filename, int flags);
void *fake_dlsym(void *handle, const char *symbol);
int fake_dlclose(void *handle);

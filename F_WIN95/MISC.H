
using find_t = _finddata_t;

int findfirstfile(const char* pattern, int mode, find_t* fileinfo, intptr_t* handle);
int findnextfile(intptr_t handle, find_t* fileinfo);
int findclose(intptr_t handle);
void editornotported();

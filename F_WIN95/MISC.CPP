
#include "all.h"

int findfirstfile(const char* pattern, int mode, find_t* fileinfo, intptr_t* handle) {
	*handle = _findfirst(pattern, fileinfo);
	return *handle == -1;
}

int findnextfile(intptr_t handle, find_t* fileinfo) {
	return _findnext(handle, fileinfo) == -1;
}

int findclose(intptr_t handle)
{
	return _findclose(handle);
}

int s_random(int tartomany) {
	return rand() % tartomany;
}

void editornotported() {
	if( !Korny )
		hiba( "pleasewait-ben Korny == NULL!" );
	blt8( Korny->picbuffer, Korny->ppic_fomenu);
	int start = 60;
	int line = 30;
	Korny->pabc_fomenu->writekozep(Korny->picbuffer, 160, start, "Editor has not been");
	Korny->pabc_fomenu->writekozep(Korny->picbuffer, 160, start + line, "ported to Windows.");
	Korny->pabc_fomenu->writekozep(Korny->picbuffer, 160, start + line * 2, "Sorry!");
	lassufizre( Korny->picbuffer, Korny->pal_fomenu );
	mk_getextchar();
}

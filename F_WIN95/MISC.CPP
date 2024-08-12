
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

const char* getlevfilepattern() {
	if (Newdirs) {
		return "lev\\*.lev";
	}
	else {
		return "*.lev";
	}
}

const char* getrecfilepattern() {
	if (Newdirs) {
		return "rec\\*.rec";
	}
	else {
		return "*.rec";
	}
}

const int MAX_SIZE = 30;

const char* createpath(const char* str, const char* prefix) {
	static char result[MAX_SIZE];

	if (Newdirs) {
		strncpy(result, prefix, MAX_SIZE - 1);
		result[MAX_SIZE - 1] = '\0';
		strncat(result, str, MAX_SIZE - strlen(result) - 1);
	}
	else {
		strncpy(result, str, MAX_SIZE - 1);
		result[MAX_SIZE - 1] = '\0';
	}

	return result;
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

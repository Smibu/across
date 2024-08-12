#include	"w_all.h"


void w_initvaltozok( void ) {
}

//static double Elteltelozo = 0.0;

// Idohuzasra:
void semmi( void ) {
}

// see MAIN.CPP
int Sajatugras = 0;
int Otszoros = 0;
int Dupladuplabuffer = 0;
int Snapenabled = 0;
int Sarvari = 0;
pic8* Pscr8 = NULL;

int Centeredcam = 1;
int Newdirs = 0;

static void ugraseldontes(void) {
	if (access("fordit.inf", 0) == 0)
		Sajatugras = 0;
	else
		Sajatugras = 1;
}

static void checkcenteredcam(void) {
	if (access("nocenteredcam.inf", 0) == 0)
		Centeredcam = 0;
	else
		Centeredcam = 1;
}

static void checknewdirs(void) {
	if (access("newdirs.inf", 0) == 0)
		Newdirs = 1;
	else
		Newdirs = 0;
}

void mv_main( void ) {
	mv_startstopper();

	Config.viewxsize = 1;
	Config.viewysize = 1;
	Config.viewxorig = 0;
	Config.viewyorig = 0;
	Config.viewxtolas = 0;
	Config.zoom = 0;

	initadatok();
	ugraseldontes();
	checkcenteredcam();
	checknewdirs();

	teljes();
}




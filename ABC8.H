
typedef pic8* ptrpic8;

class abc8 {
	ptrpic8* ppsprite;
	short* ytomb;
	short tav;
public:
	int success;
	abc8( const char* nev );
	~abc8( void );
	void write( pic8* pdest, int x, int y, const char* text, int tav = -1000 );
	void writekozep( pic8* pdest, int x, int y, const char* text, int tav = -1000 );
	int len( const char* text, int tav = -1000 );
	void settav( int tav );
};


#ifndef __POKEMON_H__
#define __POKEMON_H__


struct mov{
	char left_name[20];
	char type;
	int atk;
	char right_name[20];
};
typedef struct mov mov;
struct Pokemon {
		char name[20];
		unsigned char *front_bmp;
		unsigned char *back_bmp;
		int16_t hp;
		int16_t fixhp;
		char type;
		mov movearr[3];
};
typedef struct Pokemon Pokemon;

extern void attack();

#endif

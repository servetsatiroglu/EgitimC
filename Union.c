#include <stdio.h>
#include <string.h>
//Union da Bellek Kullanimi
union Data {
	int i;
	float f;
	char str[20];
}data;
 
int main( ) {
	
	data.i = 10;
	printf( "data.i : %d\n", data.i);
   	
	data.f = 220.5;
	printf( "data.f : %f\n", data.f);
   	
	strcpy( data.str, "C Programming");
	//printf( "data.str : %s\n", data.str);

	printf( "data.i : %d\n", data.i);
	//printf( "data.f : %f\n", data.f);
	//printf( "data.str : %s\n", data.str);
	
	return 0;
}


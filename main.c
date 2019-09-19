#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	char x_1;
	short x_2;
	float x_3;
	double x_4;
	
	printf("bytes of int : %d\n", sizeof(x) );
	printf("bytes of char : %d\n", sizeof(x_1) );
	printf("bytes of short : %d\n", sizeof(x_2) );
	printf("bytes of float : %d\n", sizeof(x_3) );
	printf("bytes of double : %d\n", sizeof(x_4) );
		
	return 0;
} 

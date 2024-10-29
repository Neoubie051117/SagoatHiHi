#include <stdio.h>
#include <conio.h>

#define ROWS 10
#define COLS 10

int main(){
clrscr();
int table[ROWS][COLS];

	for(int i = 0; i < ROWS; i++){
	 for(int j = 0; j < COLS; j++){
	  table[i][j] = (i + 1) * (j + 1);
	 }
	}

printf("MULTIPLICATION TABLE: \n");

	for(int h = 0; h < ROWS; h++){
	 for(int j = 0; j < COLS; j++){
	  printf("%4d", table[h][j]);
	 }
	 printf("\n");
	}
	printf("\n");
return 0;
}
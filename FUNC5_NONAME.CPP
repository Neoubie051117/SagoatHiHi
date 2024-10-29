#include <stdio.h>
#include <conio.h>

void Table(){
	int variable = 3;

	printf("Multiplication Table of %d \n", variable);

	for(int number = 1; number <= 10; number++){
	 printf("%d x %d = %d \n", variable, number, variable * number);
	}
}

int main(){
	clrscr();
	Table();

	return 0;
}
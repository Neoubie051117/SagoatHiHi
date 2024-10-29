#include <stdio.h>
#include <conio.h>

int squareFunc(int number);

int main(){
	clrscr();

	int variable = 5;
	int answer = squareFunc(variable);

	printf("Square of %d is %d", variable, answer);

	return 0;
}

int squareFunc(int number){
	return number * number;
}
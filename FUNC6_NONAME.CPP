#include <stdio.h>
#include <conio.h>

void nameUser(char name[]){
	printf("Hello, %s \\(0 o 0)/ \n", name);
}

int main(){
	clrscr();

	char firstName[] = "Name";
	nameUser(firstName);

	return 0;
}

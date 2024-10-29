#include <stdio.h>
#include <conio.h>

int main(){

	clrscr();

	printf("Number from 1 to 10 \n");

	for(int iterator = 1; iterator <= 10; iterator++){
		if(iterator != 10){
			printf("%d, ", iterator);
		}else{
			printf("%d", iterator);
		}
	}

	return 0;
}
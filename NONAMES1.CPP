#include <stdio.h>
#include <conio.h>

int main(
){
int no[5];
no[0] = 10;
no[1] = 20;
no[2] = 30;
no[3] = 40;
no[4] = 50;

for(int i = 0; i < 5; i++){
printf("Element %d: %d \n",i,no[i]);
}
return 0;
}
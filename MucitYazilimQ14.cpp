#include<stdio.h>
/*This program takes a number as a input then
finds biggest digit in the number. */
int main(){
	int number,temp,biggest;
	printf("Enter a number: \n"); scanf("%d",&number);
	biggest = number % 10;
	number = number / 10;
	while(number != 0){
		temp = number % 10;
		if(temp > biggest)
		biggest = temp;
		number = number / 10;
	}
	
	printf("The biggest digit is:%d ",biggest);
	
	return 0;
}

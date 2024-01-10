#include<stdio.h>
#include<math.h>
//This program checks if the number is armstrong number or not.
int main(){
	int number,temp,digit = 0,temp2,sum = 0;
	printf("Enter a number: \n"); scanf("%d",&number);
	
	temp = number;
	temp2 = number;
	
	while(temp != 0){
	temp = temp / 10;	
	digit++;
	}
	
	while(temp2 != 0){
		sum +=pow(temp2 % 10,digit);
		temp2 = temp2 / 10;
	}
	
	if(number == sum)
	printf("The number you have entered is an armstrong number. \n");
	else
	printf("The number you have entered is not an armstrong number. \n");
	
	return 0;
}

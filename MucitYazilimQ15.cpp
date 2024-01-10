#include<stdio.h>
//This program finds if the input is polindrom or not.
int main(){
	int number,rev_number = 0,temp;
	printf("Enter a number: \n"); scanf("%d",&number);
	
	temp = number;
	
	while(temp != 0){
	    rev_number = rev_number * 10 + temp % 10;
		temp = temp / 10;
	}
	
	if(rev_number == number)
	printf("The number is a polindrom number: \n");
	else
	printf("The number is not polindrom. \n");
	
	return 0;
}

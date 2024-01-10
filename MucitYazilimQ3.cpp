#include<stdio.h>
#include<conio.h>
/* Switch case simple calculater.
Does only four operations: +,-,*,/
*/
int main(){
	char option;
	float n1,n2;
	printf("Enter the first number. \n"); scanf("%f",&n1);
	printf("Enter the second number. \n"); scanf("%f",&n2);
	printf("Enter the operation: [+,-,*,/]\n"); scanf("%s",&option);
	
	switch(option){
		
		case '+':
		printf("Result:%f ",n1+n2);	
		break;
		
		case '-':
		printf("Result:%f ",n1-n2);
		break;
		
		case '*':
		printf("Result:%f ",n1*n2);
		break;
		
		case '/':
		printf("Result:%f ",n1 / n2);
		break;
			
		default:printf("You have entered a invalid operation. \n");
		break;
	}
	
	getch();
	
	return 0;
}

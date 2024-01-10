#include<stdio.h>
/*Program takes an input from the indivual one number,and one character
prints that much character to the screen*/
int main(){
	int number;
	char ch;
    printf("Enter a character: \n"); scanf("%s",&ch);	
	printf("Enter a number: \n");  scanf("%d",&number);
	
	while(number != 0){
		printf("%c",ch);
		number--;
	}
	
	return 0;
}

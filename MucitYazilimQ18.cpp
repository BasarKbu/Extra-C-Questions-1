#include<stdio.h>
//This program converts decimal into binary.
//decimal -> binary
/*
For the solution I used bitwise operations.
if you didn t like this solution you can look the solution in homework 1 
beacuse it's the same question and ý want to show a different solution.
For this solution maximum you can enter 511.
For more it doesn't work.
*/
int main(){
    int dec,bin=0;	
	printf("Enter a number: \n"); scanf("%d",&dec); 
	int i;
	for(i=8;i>=0;i--){
		bin = dec >> i;
		if(bin & 1)
		printf(" 1 ");
		else
		printf(" 0 ");
	}
	
	return 0;
}

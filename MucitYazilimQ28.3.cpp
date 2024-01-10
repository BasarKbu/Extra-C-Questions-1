#include<stdio.h>
//We send a number to recursive function then we calculate Factorial.
int fact(int x){
	if(x == 1)
    return 1;
	
	return x * fact(x-1);
}

int main(){
	int number,result;
	printf("Enter a number: \n"); scanf("%d",&number);
	result = fact(number);
	
	printf("Factorial is:%d ",result);
}

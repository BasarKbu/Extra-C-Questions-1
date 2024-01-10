#include<stdio.h>
#include<conio.h>
//Recursive function fibonacci series.

int fibonacci(int n){
    if(n == 0 || n == 1)
    return n;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int number,result;
	printf("Enter a number: \n"); scanf("%d",&number);
    result = fibonacci(number);
	printf("Result:%d ",result);
	getch();
	return 0; 
}

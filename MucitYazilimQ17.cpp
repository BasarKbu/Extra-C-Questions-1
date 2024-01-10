#include<stdio.h>
//This program use two pointers to add two number to each other.
int main(){
	int n1,n2;
	int *a,*b;
	printf("Enter the first number: \n"); scanf("%d",&n1);
	printf("Enter the second number: \n"); scanf("%d",&n2);
	a = &n1;
	b = &n2;
	
	printf("Sum of two numbers is:%d ",*a  + *b);
	
	return 0;
}

#include<stdio.h>
//We send a number to recursive function then from that number n+n-1+n-2 +.......+1

int sum(int x){
	if(x == 0)
	return 0;
	
	return x + sum(x-1);
}

int main(){
   int number,result;	
	printf("Enter a number: \n"); scanf("%d",&number);
	result = sum(number);
	printf("Sum is:%d ",result);
	
	return 0;
}

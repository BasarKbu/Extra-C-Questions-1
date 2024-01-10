#include<stdio.h>
//This program gives you the first hundred numbers sum.
int main(){
	int i,sum=0;
	for(i=1;i<=100;i++){
		sum += i;
	}
	
	printf("Sum of the series is:%d",sum);
	
	return 0;
}

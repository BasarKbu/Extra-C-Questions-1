#include<stdio.h>
/*Program that calculates the odd and the even numbers separately 
*/
int main(){
int n,sum_odd=0,sum_even=0,number;	
	printf("Enter the term count: \n"); scanf("%d",&n);
	
	while(n != 0){
		printf("Enter a number: \n"); scanf("%d",&number);
		if(number % 2 == 0)
		sum_even += number;
		else
		sum_odd += number;
		n--;
	}
	
	printf("Sum of the odd numbers is:%d \n",sum_odd);
	printf("Sum of the even numbers is:%d \n",sum_even);
	
	return 0;
}

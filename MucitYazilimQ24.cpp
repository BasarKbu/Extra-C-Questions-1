#include<stdio.h>
//This program takes two integer numbers as inputs and prints the prime numbers between.
int main(){
	int n1,n2,temp,i,j,cnt;
	printf("Enter the first number: \n");  scanf("%d",&n1);
	printf("Enter the second number: \n"); scanf("%d",&n2);
	printf("\n ");
	
	if(n2 > n1){ //I want n1 to be always big so ý do it like this.
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	for(i=n2+1;i<n1;i++){
	  cnt = 0;
	  for(j=2;j<i;j++){
	  	
	  	if(i % j == 0)
	  	cnt++;
	  	
	  }
	if(cnt == 0)
	printf("%d\n",i); //We did this beacuse if this is happening then we know that it's prime number.
	
	}
	
	
	return 0;
}

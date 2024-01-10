#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

//we will create an array and fill it with some random numbers.
//Then we will print the array and sum.
int main(){
	int size,i,sum = 0,j;
	printf("Enter the size of the array: \n"); scanf("%d",&size);
	int array[size];
	
	for(i=0;i<size;i++){
		array[i] = (rand() % 100) + 1;
		sum += array[i];
	}
	
	for(j=0;j<size;j++){
		printf("%d ",array[j]);
	}
	printf("\n");
	printf("Sum of the array:%d \n",sum);
	
	return 0;
}

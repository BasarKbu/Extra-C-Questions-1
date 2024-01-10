#include<stdio.h>
//This program lists the elements in the array.
int main(){
	int size,i,j,k,temp;
	printf("Enter the size of the array. \n"); scanf("%d",&size);
	int array[size];
	
	for(i=0;i<size;i++){
		printf("Enter a number: \n"); scanf("%d",&array[i]);
	}
	
	for(j=1;j<size;j++){
		
		for(k=0;k<j;k++){
		temp = array[k];
		if(temp > array[j]){
		array[k] = array[j];
		array[j] = temp;
	}
			
		}
		
	}
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}

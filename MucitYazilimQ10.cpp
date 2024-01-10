#include<stdio.h>
//Finds the smallest and the biggest inside an array.
int main(){
	int size,biggest,smallest,i,j;
	printf("Enter the size of the array: \n"); scanf("%d",&size);
	int array[size];
	
	for(i=0;i<size;i++){
		printf("Enter %d. element of the array: \n",i+1); scanf("%d",&array[i]);
	}
	smallest = array[0]; //I do it like this beacuse we will compare with other elements in the array.
	biggest = array[0]; 
	
	for(j=1;j<size;j++){
		if(array[j] > biggest)
		biggest = array[j];
		if(array[j] < smallest)
		smallest = array[j];
	}
	
	printf("The smallest in the array is:%d \n",smallest);
	printf("The biggest in the array is:%d\n",biggest);
	
	return 0;
}

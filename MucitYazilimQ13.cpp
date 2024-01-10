#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Dynamicly defined array 
with the purpose of finding the biggest */
int main(){
	int size,i,biggest,j;
	int *array;
	printf("Enter the size of the array. \n"); scanf("%d",&size);
	array=(int*)malloc(size*sizeof(int));
	
	for(i=0;i<size;i++){
		printf("Enter a value: \n"); scanf("%d",array+i);
	}
	
	biggest=array[0];
	
	for(j=1;j<size;j++){
		
		if(biggest < array[j])
		biggest=array[j];
	}
	
	printf("The biggest number is in the dynamicly defined array is:%d ",biggest);
	free(array);
	getch();
	return 0;
}

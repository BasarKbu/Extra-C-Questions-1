#include<stdio.h>
//This program finds the smallest and the biggest numbers that entered by the indivual. 
int main(){
	int n1,n2,n3;
	printf("Pls enter the numbers different if you enter them same the program isn't going to work. \n");
	printf("\nEnter the first number: "); scanf("%d",&n1);
	printf("\nEnter the second number: "); scanf("%d",&n2);
	printf("\nEnter the third number: "); scanf("%d",&n3);
	
    if(n1 > n2 && n1 > n3)
	printf("First number is the biggest. \n");
	else if(n2 > n1 && n2 > n3)
	printf("Second number is the biggest. \n");
	else
	printf("Third number is the biggest. \n");
	
	if(n3 > n1 && n2 > n1)
	printf("First number is the smallest. \n");
	else if(n3 > n2 && n1 > n2)
	printf("Second number is the smallest. \n");
	else
	printf("Third number is the smallest. \n");
	
	
	return 0;
}

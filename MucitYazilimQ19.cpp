#include<stdio.h>
#include<math.h>
//This program calculates the hypotenus of the triangle.
int main(){
	float a,b,c; //Think the triangle as perpendicular.
	printf("Enter the first side's length: \n"); scanf("%f",&a);
	printf("Enter the second side's length: \n"); scanf("%f",&b);
	
	c = pow(a,2) + pow(b,2);
	c = sqrt(c);
	
	printf("The hypotenus is:%.2f ",c);
	
	return 0;
}

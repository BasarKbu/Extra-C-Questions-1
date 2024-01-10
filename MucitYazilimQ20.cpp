#include<stdio.h>
#include<math.h>
/*This program calculates the perimeter and the area of the circle.
by the way we are going to use functions.*/

float perimeter(float r){
	float perimeter;
	perimeter = 2 * M_PI * r;
	return perimeter;
}

float area(float r){
	float area;
	area = M_PI * pow(r,2);
	return area;
}


int main(){
	float radius,a,b;
	printf("Enter the radius: \n"); scanf("%f",&radius);
	a = perimeter(radius);
	b = area(radius);
	
	printf("The perimeter of the circle is:%f \n",a);
	printf("The area of the circle is:%f \n",b);
	
	return 0;
}

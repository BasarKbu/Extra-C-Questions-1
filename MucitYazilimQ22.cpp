#include<stdio.h>
#include<math.h>
//Finds the area = 4*pi*r^2 and the volume 4/3*pi*r^3 of sphere
//There is function in the math.h M_PI that gives you the pi ý am going to use it.
int main(){
	float r,area,volume; //radius
	
	printf("Enter the radius: \n"); scanf("%f",&r);
	
	area = 4 * M_PI * pow(r,2);
	volume = 4/3 * M_PI * pow(r,3);
	
	printf("The area of the sphere is:%f \n",area);
	printf("The volume of the sphere is:%f \n",volume);
	
	return 0;
}

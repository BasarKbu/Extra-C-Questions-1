#include<stdio.h>
#include<stdlib.h>
/*

The distance between two towers of a cable car line is 1000 meters. There is a middle tower right in the middle of the line. The starting tower is called the 1st tower, the middle one is called the 2nd tower, and the last one is called the 3rd tower.
The position of the wagon on the line, relative to the start, is entered from the keyboard.
The speed of the wagon is given by the formula below.
Write a C program that finds which tower the wagon is closest to and its current speed */
//Formula speed = 2.425 + 0.00175 * x ^2
// x is distance from the start.

int main(){
	int location,distance;
	float speed;
	printf("Enter the location: \n"); scanf("%d",&location);
	
	if(location <= 250)
	distance = location;
	else if(location <= 500)
	distance = 500 - location;
	else if(location <= 750)
	distance = location - 500;
	else
	distance = 1000 - location;
	
	printf("Distance of the wagon to the closest tower:%d \n",distance);
	speed = 2.425 + 0.00175 * distance * distance;
	
	if(location <= 250)
	printf("Wagon is closer to the first tower. \n");
	else if(location <= 750)
	printf("Wagon is closer to the second tower. \n");
	else
	printf("Wagon is closer to the third tower. \n");
	
	printf("Speed of the wagon is:%f ",speed);
	
 return 0;	
}

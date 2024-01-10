#include<stdio.h>
/*This program calculates the your midterm and final average and says 
if you passed or not */

int main(){
float midterm,final,average,result;

printf("Enter your midterm grade: \n"); scanf("%f",&midterm);
printf("Enter your final grade: \n"); scanf("%f",&final);
printf("Enter the average of the class: \n"); scanf("%f",&average);

	result = midterm * 0.4 + final * 0.6;
	
	if(result >= average)
	printf("Congrats you have passed. \n");
	else
	printf("You have Failed :(");
	
	return 0;
}

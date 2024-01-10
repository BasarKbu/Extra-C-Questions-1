#include<stdio.h>
#include<conio.h>
//Until we enter a negative number,the program will count the positive number count,
//average and sum.
int main(){
	float number,cnt = 0,average = 0,sum = 0;	
	printf("Enter a number: \n"); scanf("%d",&number);
	
	while(number > 0){
		sum +=number;
		cnt++;
	    printf("Enter a number: \n"); scanf("%f",&number);	
	}
	average = sum / cnt ;
	
	printf("The count of positive numbers is:%f \n",cnt);
	printf("Sum of the positive numbers:%f \n",sum);
	printf("The average of the positive numbers is:%f \n",average);
	getch();
	return 0;
}

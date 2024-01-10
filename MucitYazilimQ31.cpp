#include<stdio.h>
//This program computes plane's passenger count.
//passenger_count = (plane number /10)! * 5
int main(){
	int plane_no,passenger_count,i,fact = 1;
	printf("Enter the plane number: \n"); scanf("%d",&plane_no);
	
	for(i=1;(i <=plane_no/10); i++){
		fact *=i;
	}
	
	passenger_count = fact * 5;
	printf("The passenger count is:%d ",passenger_count);
	
	return 0;
}

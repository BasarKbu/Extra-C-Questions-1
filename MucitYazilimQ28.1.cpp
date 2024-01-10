#include<stdio.h>
//1 -> N numbers getting listed.

int print(int n){
	
 if(n == 0)	
  return 0;
  
  printf("%d ",n);	
  print(n-1);
	
}

int main(){
	int number;
	printf("Enter a number: \n"); scanf("%d",&number);
	print(number);
	
	return 0;
}

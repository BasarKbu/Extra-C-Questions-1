#include<stdio.h>
//This program finds the length of the sentence by not using the strlen function.
int main(){
	char str[50];
	int length=0,i;
	printf("Enter a sentence: \n"); gets(str);
	
	for(i=0;str[i]!=NULL;i++){
		length++;
	}
	
	printf("The length of the function is:%d ",length);
	
	return 0;
}

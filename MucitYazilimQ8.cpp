#include<stdio.h>
#include<string.h>
//Takes a sentence and reverses it.
int main(){
	int i,length = 0;
	char str[50],rev_str[50];
	printf("Enter a sentence: \n"); gets(str);
	
	for(i=0;str[i]!=NULL;i++){
		length++;
	}
	
	for(i=0;i<=length;i++){
		rev_str[i]=str[length-i-1];
	}
	rev_str[length++]='\0';
	
	printf("The string in reverse:%s",rev_str);
	
	return 0;
}

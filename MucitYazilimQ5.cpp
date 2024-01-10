#include<stdio.h>
//This program searchs the character in the sentence and finds how many times it was used.
int main(){
	char str1[50],ch;
	int cnt = 0,i;
	printf("Enter a sentence: \n"); gets(str1);
	printf("Enter a character: \n"); scanf("%s",&ch);
	
	for(i=0 ;str1[i] != NULL; i++){
		if(str1[i] == ch)
		cnt++;
	}
	
	printf("%d times character used in the sentence. \n",cnt);
	
	
	
	return 0;
}

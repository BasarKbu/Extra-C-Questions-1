#include<stdio.h>
//Finds the first letters of each word in the sentence

int main(){
	char str[50],first_letters[20];
	int i,cnt = 1,j;
	
	printf("Enter a string: \n"); gets(str);
	first_letters[0]=str[0];
	
	for(i=0;str[i]!=NULL;i++){
		if(str[i] == ' '){
		first_letters[cnt] = str[i+1];
		cnt++;
	}
	
	}
	
    for(j=0;j<cnt;j++){
    	printf("%c ",first_letters[j]);
	}
	
	return 0;
}

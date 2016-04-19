#include <stdio.h>
#include <string.h>

int reversenumber(int number){
	char str[15];
	sprintf(str, "%d", number);
	// printf("%d %s\n", (int)strlen(str), str);
	int i,j=10;

	//Stripping all zeros
	for(i=0;i<(int)strlen(str)-1;i++){
		if(number%j==0){number = number/j;}
	}

	sprintf(str, "%d", number);
	int len = (int)strlen(str);
	int iterator = len;
	len = len-1;
	if(iterator%2!=0){iterator = iterator-1;}
	for(i=0;i<iterator/2;i++){
		char temp;
		temp = str[len-i];
		str[len-i] = str[i];
		str[i] = temp;
	}
	return atoi(str);
}

int calculatereversedsum(int number1, int number2){
	return reversenumber(reversenumber(number1)+reversenumber(number2));
}

int main(void){
	int numberoftestcases,i, number1, number2;
	scanf("%d", &numberoftestcases);
	for(i=0;i<numberoftestcases;i++){
	scanf("%d %d", &number1, &number2);
	printf("%d\n", calculatereversedsum(number1, number2));
	}
	return 0;
}


#include <stdio.h>
#include <math.h>

int checkprime(int n){
	int j;
	switch(n){
		case 0:
		return 0;
		case 1:
		return 0;
		case 2: 
		return -1;
	}
	int squareroot=(int)ceil(sqrt(n));
	for(j=2;j<=squareroot;j++){
		if(n%j==0){
			return 0;
		}
	}
	return -1;
	
}

void printprimes(int lowerbound, int upperbound){
	int i;
	for(i=lowerbound; i<=upperbound;i++){
		if(checkprime(i)==-1){
			printf("%d\n", i);
		}
	}
}

int main(){
	int numberoftestcases,i, lowerbound, upperbound;
	scanf("%d", &numberoftestcases);
	for(i=0;i<numberoftestcases;i++){
		scanf("%d %d", &lowerbound, &upperbound);
		printprimes(lowerbound, upperbound);
		printf("\n");
	}
}

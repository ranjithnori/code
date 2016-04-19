#include<stdio.h>
#include<math.h>

int zero(int n){
  int count=0, i;
  for(i=1;i<=12;i++){
    if(n/(int)pow(5,i)==0){
      break;
    }
    else{
    // printf("%d\n",n/(int)pow(5,i));
    count = count + ((n/(int)pow(5,i)));
    }
  }
  return count;
}

int main(){
  int numberoftestcases,i, number1;
  scanf("%d", &numberoftestcases);
  for(i=0;i<numberoftestcases;i++){
  scanf("%d", &number1);
  printf("%d\n", zero(number1));
  }
  return 0;
}


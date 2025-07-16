#include<stdio.h>
int main(){
  int x;
  printf("enter x \n");
  scanf("%d",&x);
  int product=1;
  for(int i=1;i<=x;i++){
  product = product * i;
  i++;
  }
  printf("factorial of %d is %d \n" ,x,product);
return 0;
}

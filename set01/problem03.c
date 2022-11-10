#include <stdio.h>
int input();
int add(int a,int b);
void output(int a, intb, int sum);
int main()
{
  input a,b, sum;
  printf("enter two numbers:");
  a=input();
  b=input();
  sum = add(a,b);
  output(a,b,sum);
}
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int add(int a, int b){
  int sum;
  sum = a=b;
  return sum;
}
void output (inta,intb,int sum){
  print("the sum of %d and %d id %d\n",a,b,sum);
}

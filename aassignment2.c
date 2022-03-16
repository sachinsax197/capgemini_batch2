#include<stdio.h>
#define exp1 num%10
#define exp2 num=num/10


int main()
{
  int num=0,i=1,sum=0,mul=1;
  printf("Enter the number=");
  scanf("%d",&num);
  while(i<=num)
  {
    if(exp1!=0)
    {
      sum+=exp1;
      mul*=exp1;
    }
    exp2;
  }
  printf("\n Sum=%d\n",sum);
  printf("\n Mul=%d\n",mul);
  }

#include<stdio.h>
#define exp1 num%10
#define exp2 num=num/10


int main()
{
  int num=0,i=1,even=1,odd=1;
  printf("Enter the number=");
  scanf("%d",&num);
  while(i<=num)
  {
      even*=exp1;
      exp2;
    
      odd*=exp1;
      exp2;
     
  }
  
  if(even==odd)
    printf("\n Yes");
  else
  printf("\n No");
  }

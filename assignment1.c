#include<stdio.h>    
 
int main()
{  
  int ch=65;    
    int i,j,k,m,n;
    printf("Enter The Number of lines=\n");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)    
    {    
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c",ch++);
         }
            ch--;    
        for(m=1;m<i;m++)
        {
            printf("%c",--ch);  
         }
        printf("\n");    
        ch=65;    
    }    
return 0;  
}

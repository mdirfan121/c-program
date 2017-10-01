#include<stdio.h>
int main()
{
  int i,j;
  for(i=0;i<=6;i++)
  {
   for(j=0;j<=3;j++)
   {
    if(i+j==n/2||j-i==n/2||i-j==n/2)
    {
	printf("*");}
    else
    {
    printf(" ");
    }
    }
    printf("\n");
    }
    return 0;
    }


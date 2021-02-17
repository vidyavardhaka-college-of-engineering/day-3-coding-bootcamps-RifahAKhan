//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n,i,j;
    printf("Enter the number of rows");
  	scanf("%d", &n);
    printf("\n\n\n");

  	//Write your code here
  	for(i=0;i<n;i++)
    {
      for(j=0;j<=i;j++)
      printf("*");
      printf("\n");
    }
  return 0;
}

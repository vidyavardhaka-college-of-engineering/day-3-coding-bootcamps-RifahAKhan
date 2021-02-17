//You will be given a positive integer 'n'. Your task is to print the first 'n' terms of the fibonacci series.
//Example
//Input: 4
//Output: 0 1 1 2


#include<stdio.h>
int main()
{
    int n,i,n1=0,n2=1,nextTerm;
    printf("Enter the value for n\n");
    scanf("%d", &n);
    printf("Fabonacci Series: ");

    //Write your code here
    for(i=1;i<=n;i++)
    {
      printf("%d",n1);
      nextTerm = n1 +n2;
      n1 = n2;
      n2 = nextTerm;
    }
  return 0;
}

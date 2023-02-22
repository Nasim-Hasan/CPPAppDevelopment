#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,a1=1;
    int n, sum,i;

    printf("\n Input the Number of Steps for this Fibonacci Series");
    scanf("%d",&n);

    printf("\n The Fibonacci Series is:");
    printf("%d\t",a);
    printf("%d\t",a1);

    for(i=0;i<n;i++)
    {
       sum=a+a1;
       a=a1;
       a1=sum;
       printf("%d\t",sum);

    }

    return 0;
}

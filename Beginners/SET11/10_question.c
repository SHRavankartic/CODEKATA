#include <stdio.h>
int main()
{
    int a,i;
    int sum=0;
    printf("enter the values");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        sum=sum+i;
    printf("%d\n",sum);   
}

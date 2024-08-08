#include<stdio.h>
int main()
{
    int first,second,*p,*q,sum;
    printf("Enter two integer to add\n");
    scanf("%d%d",&first,&second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("Sum of entered number = %d\n",sum);
    return 0;
}
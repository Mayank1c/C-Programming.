#include<stdio.h>

int main()
{
    int num, r, c;
    int i = 1;
    char ch = 'A';

    printf("Enter no. of rows : ");
    scanf("%d", &num);
    printf("\n");
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            if (r % 2 == 0)
            {
                printf(" %c", ch++);
            }
            else
            {
                printf(" %d", i++);
            }
        }

        printf("\n");
    }

    return 0;
}

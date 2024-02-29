#include <stdio.h>
int main()
{
    int row, i, j, order;
    printf("type 1 for reverse order \ntype 2 for general triangle\n");
    scanf("%d", &order);
    printf("how many rows you want\n");
    scanf("%d", &row);
    if (order == 1)
    {
        printf("reverse order triangle\n");
        /* code */ for (i = row; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                /* code */ printf("*");
            }
            printf("\n");
        }
        {
            /* code */
        }
    }
    else if (order == 2) {
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*"); /* code */
        }
        printf("\n");
    }

    {
        /* code */
    }

    {
        // /* code *
    }
    }
        else
    printf("wrong input given");

    return 0;
}
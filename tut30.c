#include <stdio.h>
int main()
{
    int choice, rows, i, j;
    printf("choose 1 for triangular pattern \nchoose 0 for reversed triangular pattern\n");
    scanf("%d", &choice);
    printf("how many rows in  your star triangle\n");
    scanf("%d", &rows);
    if (choice == 1)

    {
        printf("triangular star pattern  \n");
        /* code */ for (int i = 1; i <= rows; i++)
        {
            for (j = 1; j <= i; j++)
            {
                /* code */ printf("*");
                
            }
            printf("\n");
        }
        
            
        

        /* code */
    }

     else if (choice == 0)
     {
        /* code */ printf("reverse triangular pattern \n");

        for (i = rows; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                /* code */ printf("*");
                
            }
            printf("\n");
        }

        /* code */
    }
    else
    {
        printf("invalid pattern");
        
    }
    return 0;
}
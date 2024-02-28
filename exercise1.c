#include <stdio.h>
int main()
{
    int n,a, i;
    int fact = 1;
    
    printf("give me your number");
    scanf("%d", &n );
    {  if (n <= 0 || n == 1)
    {
             printf("can't get your number\n");

    }
    
else
{
 
    for ( i = 1; i <= n ; ++i)

    fact *= i;
}
    
    
    printf("the number will be %d ", fact);

    return 0;
}
}
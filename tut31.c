#include<stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a = 21 , b =34 ;
    printf("%d , %d\n",  a ,b);
    swap(&a, & b);
    printf("%d , %d" , a, b);
    return 0 ;
}
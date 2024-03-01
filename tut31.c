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





#include<stdio.h>
void numberprinter(int *x, int  *y)
{
    int sum, substraction;
  sum = *x + *y;
printf("here is the addition of the numbers \n %d\n" , sum );

substraction = *x - *y;
printf("here is the substraction\n %d\n", substraction);
printf("%d , %d" , *x, *y);

}




int main(){
    int a,b;
    printf("give your first number");
    scanf("%d" , &a);
    printf("give your second number");
   scanf("%d" , &b);
   numberprinter(&a,&b);
}

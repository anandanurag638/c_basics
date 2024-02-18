/* #include<stdio.h>
    int factorial(int n);
    int main()
    {
        int num;
        printf("enter a digit");
        scanf("%d", &num);
        printf("factorial is  %d = %d", num, factorial(num) );
        return 0;

    }

    
    int factorial(int n){
    if (n == 0 || n == 1)
     {
        return 1;
     }
    else {
    return n *factorial(n-1);
     
     
}

    }
  */

 #include<stdio.h>
 int fib(int n);
 int main(){
    int num, i , s;
    printf("give me a number to recursion \n");
    scanf("%d", &num);
    printf("loop for fibonacci series %d\n", num);
    for ( i = 2; i < num; i++){
    printf("%d" , fib(num));
    {
        /* code */printf("\n");
    }
    
    printf("recursion of %d is %d\n", num, fib(num));

    return 0;

 }
 }
int fib(int n){
    if (n <= 1)
    {
        /* code */return n ; 
    }
    else {
           return fib (n-1) + fib(n- 2);
    }
}
#include<stdio.h>
void  arrev(int array[]) {
    for (int i = 0, j = 8 - 1; i < j; i++, j--) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
        printf("array after swaping \n");
        for (int i = 0; i < 8; i++)
        {
            /* code */printf("%d\n", array[i]);
        }
        

}


int main(){
    int args1 [8], i;
     printf("give me 8 numbers to swap \n");
    for ( i = 0; i < 8; i++)
    {
        printf("give me number ", i + 1);
        scanf("%d", &args1[i]);
    }
    
        printf("original array given to swap \n");
        for ( i = 0; i < 8; i++)
        {
            /* code */printf("%d\n", args1[i]);
        }
        
        printf("\n");
    arrev(args1);        
    return 0;
}



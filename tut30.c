#include<stdio.h>
int main(){
    int choice, sizeoftriangle;
    printf("choose 1 for triangular pattern and 0 for reversed triangular pattern");
    scanf("%d" , &choice);
    printf("how big is your star triangle");
    scanf("%d", &sizeoftriangle);
    if (choice == 0)
    
    {
        /* code */ for (int  i = 0; i < sizeoftriangle; i++)
        {
            /* code */printf(" * ");
        }
        
    }
    
}

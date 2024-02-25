#include<stdio.h>
int main(){
    char subject;
    printf("give me your number");
    scanf("%c", &subject);
    if (subject == 'm')
    {
        /* code */printf("you go5t 15 rupees");
    }
    else if (subject == 's')
    {
        /* code */printf("you all also won 15 rupees");
    }
     else if (subject == 'm' || subject == 's')
     {
        /* code */printf("you will get 45 rupees");
     }
     else
    printf("sorry");
    return 0;
}
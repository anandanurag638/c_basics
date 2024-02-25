#include<stdio.h>
int main(){
    char subject;
    printf("give me your subjects you passed in");
    scanf("%c", &subject);
    if (subject == 'm')
    {
        /* code */printf("you got 15 rupees");
    }
    else if (subject == 's')
    {
        /* code */printf("you  also won 15 rupees");
    }
     else if (subject == 'm' && subject == 's')
     {
        /* code */printf("you will get 45 rupees");
     }
     else
    printf("sorry");
    return 0;
}
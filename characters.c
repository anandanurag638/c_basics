#include<stdio.h>
int main(){
     char alpha[4];
     gets(alpha);
     printf(" your word is  %s\n",alpha);
     return 0;

}

#include <stdio.h>
int main()
{
    char name[] = {'a',
                   'n',
                   'u',
                   'r',
                   'a',
                   'g',
                   '\0'};

printf("your name is %s", name);
return 0;


}
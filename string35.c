// #include <stdio.h>
// int main()
// {
//     char nme[] = {'a', 'n', 'u', '\0'};
//     printf("%s", nme);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
void main(){
char n1 [] = "anurag";
char n2 [] = "anand";
char n3 [151];
// printf("here is concatinated string value\n %s\n",strcat(n1, n2));
printf("here is length of your string\n  %d \n",strlen(n2));
printf("here is the any other fuction of the word \n %s\n", strcspn );
strcpy(n3 , n1);
printf("%s /n", n3);
strcpy(n3 , n2);
printf("  %s \n", n3);
 int a = (strcmp(n1,n2));
printf("%d", a);

}
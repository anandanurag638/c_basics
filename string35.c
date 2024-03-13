// #include <stdio.h>
// int main()
// {
//     char nme[] = {'a', 'n', 'u', '\0'};
//     printf("%s", nme);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
char n1 [] = "anurag";
char n2 [] = "anand";
char n3 [151];
printf("here is concatinated string value\n %s\n",strcat(n1, n2));
printf("here is length of your string\n  %d \n",strlen(n2));
printf("here is the reverse of the word \n %d\n", strerror );
strcpy(n3 , n1);
printf("%s /n", n3);
strcpy(n3 , n2);
printf("  %s", n3);

return 0;
}
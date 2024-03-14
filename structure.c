#include <stdio.h>
struct info
{
    /* data */ int age;
    char fc[12], name[87];
    float marks;
    // char name[41];
};
int main()
{

    struct info first;
    printf("give your name \n");
    scanf("%s", first.name);
    // printf ("here is your given name   %s" , first.name);
    printf("age ??  \n");
    scanf("%d", first.age);
    // printf("marks?? \n");
    // scanf("%f", first.marks);
    // printf("fav charactor??");
    // scanf("%s", first.fc);
    // printf("your name,age and marks are following \n %s \n %d \n ", first.name, first.age);
    return 0;
}




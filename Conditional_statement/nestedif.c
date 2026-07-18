#include <stdio.h>
int main() 
{
    int age;
    scanf("%d",&age);
    if (age>=18)
    {
        printf("vote\n");
        if (age>=25)
        printf("eligible candidate");
        else 
        printf("not an eligible candidate");
    }
    else
    printf("no vote and not an eligible candidate");
 }
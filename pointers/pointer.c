#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=15, *b, **c;
    b=&a;
    c=&b;
    printf("A value:%d\n", a); 
    printf("A Address:%d\n", &a);
    printf("A Address:%d\n", b);
    printf("A Address:%d\n", &b);
    printf("A value:%d\n", *b);
    printf("A Address:%d\n", c);
    printf("A Address:%d\n", *c);
    printf("A value:%d\n", **c);
}
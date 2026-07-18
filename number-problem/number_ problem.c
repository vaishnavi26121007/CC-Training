#include <stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 (n % 9 == 0) ? printf("9") : printf("%d", n % 9);
 return 0;    
}
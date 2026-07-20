#include <stdio.h>
typedef struct employee
{
    int emp_id;
    char name[20];
    float salary;
}emp;
int main()
{
    int n, i;
    scanf("%d", &n);
    emp e[n];
    for (i=0; i<n; i++)
    {
        scanf("%d%s%f", &e[i].emp_id, e[i].name, &e[i].salary);
    }
    for (i=0; i<n; i++)
    {
        if(e[i].salary>=50000)
        {
            printf("%s\n", e[i].name);
        }
    }
}
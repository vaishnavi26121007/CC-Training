#include <stdio.h>
int main() 
{

    int i,result;
    int arr[5];
    int sum=0;
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }  
    result=sum;
    for(i=0;i<5;i++){
    result-=arr[i];
    printf("%d ",result);   
    }   
}


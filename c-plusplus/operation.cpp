#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
class abc
{
   public:
   void operation(int a,int b)
   {
    cout<<a+b<<std::endl;
   }
};
class abcd
{
    public:
    void operation(int a,int b)
    {
     cout<<abs(a-b)<<std::endl;
    }
};
int main()
{
    abc cs;
    abcd cs1;
    cs.operation(5,10);
    cs1.operation(13,7);
}
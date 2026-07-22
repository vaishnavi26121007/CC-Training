#include <stdio.h>
#include <iostream>
using namespace std;
class abc
{
   public:
   void operations()
   {
    cout<<"Parent Class Function"<<endl;
   }
};
class abcd:public abc
{
    public:
    void operation()
    {
     cout<<"Child Class Function"<<endl;
    }
};
int main()
{
    abcd it;
    it.operations();
    it.operation();
    return 0;
}
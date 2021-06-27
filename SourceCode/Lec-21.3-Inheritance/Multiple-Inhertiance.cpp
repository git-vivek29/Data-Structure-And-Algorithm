#include<iostream>
using namespace std;
class A
{
    public:
    void funcA()
    {
        cout<<"Func A"<<endl;
    }
};
class B 
{
    public:
    void funcB()
    {
        cout<<"Func B"<<endl;
    }
};
class C: public A, public B
{
};
int main()
{
    C obj;
    obj.funcA();
    obj.funcB();
    return 0;
}
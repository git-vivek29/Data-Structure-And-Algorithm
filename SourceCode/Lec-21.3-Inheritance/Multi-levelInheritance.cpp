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
class B :public A
{
    public:
    void funcB()
    {
        cout<<"Func B"<<endl;
    }
};
class C: public B
{
};
int main()
{
    C obj;
    obj.funcA();
    return 0;
}
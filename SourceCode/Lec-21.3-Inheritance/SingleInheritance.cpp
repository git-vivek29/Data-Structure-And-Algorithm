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
class B: public A
{
};
int main()
{
    B obj;
    obj.funcA();
    return 0;
}
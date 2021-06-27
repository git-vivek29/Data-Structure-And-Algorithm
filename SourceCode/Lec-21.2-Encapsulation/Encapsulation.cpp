#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void FuncA()
    {
        cout<<"Func A"<<endl;
    }
    private:
    int b;
    void FuncB()
    {
        cout<<"Func B"<<endl;
    }
    protected:
    int c;
    void FuncC()
    {
        cout<<"Func C"<<endl;
    }
};
int main()
{
    A obj;
    obj.FuncA();
    obj.FuncB(); //Not accessible due to encapsulation
    return 0;
}
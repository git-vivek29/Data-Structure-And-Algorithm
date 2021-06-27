#include<iostream>
using namespace std;
class base
{
    public:
    virtual void print()
    {
        cout<<"Base class print function"<<endl;
    }
    void display()
    {
        cout<<"Base class display function"<<endl;
    }
};
class derived:public base
{
    public:
    void print()
    {
        cout<<"Derived class print function"<<endl;
    }
    void display()
    {
        cout<<"Dervied class display function"<<endl;
    }
};
int main()
{
    base* ptr;
    derived obj;
    ptr = &obj;
    ptr -> print();
    ptr -> display();
    return 0;
}
//op
//Derived class print function
//Base class display function

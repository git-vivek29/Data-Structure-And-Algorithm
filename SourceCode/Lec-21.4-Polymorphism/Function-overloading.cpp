#include<iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Display function without parameter" << endl;
    }
    void display(int a)
    {
        cout << "Display function with int parameter" << endl;
    }
    void display(double x)
    {
        cout << "Display function with double parameter" << endl;
    }
};
int main()
{
    A obj;
    obj.display();
    obj.display(5);
    obj.display(10.5);
    return 0;
}
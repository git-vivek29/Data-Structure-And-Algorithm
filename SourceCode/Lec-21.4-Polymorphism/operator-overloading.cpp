#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
    Complex(int r=0,int i=0)
    {
        real = r;
        imag = i;
    }
    Complex operator + (Complex &b)
    {
        Complex res;
        res.real = real + b.real;
        res.imag = imag + b.imag;
        return res;
    }
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};
int main()
{
    Complex c1(2,5), c2(4,9);
    Complex c3;
    c3 = c1+c2;
    c3.display();
    return 0;
}
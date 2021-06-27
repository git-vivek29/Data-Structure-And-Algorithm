/*
Problem Statement: Write a program to check if a given number is power of 2
*/
#include<iostream>
using namespace std;
bool isPower2(int n)
{
    return (n && !(n & n-1));
}
int main()
{
    cout<<isPower2(128);
    return 0;
}
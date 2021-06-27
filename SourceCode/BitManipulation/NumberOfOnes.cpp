/*
Problem Statement: Write a program to count the number of ones in binary representation of a number
*/
#include<iostream>
using namespace std;
int numberOfOnes(int n)
{
    int count = 0;
    while(n)
    {
        n = n & n-1;
        count++;
    }
    return count;
}
int main()
{
    cout<<numberOfOnes(19);
    return 0;
}
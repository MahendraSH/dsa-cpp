// Problem Statement : Given an integer N, write a program to count the number of digits in N.

#include <bits/stdc++.h>
using namespace std;
void method1(int n)
{

    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << count << endl;
}
void method2(int n)
{
    cout << to_string(n).length() << endl;
}
void method3(int n)
{
    cout << floor((log10(n) + 1)) << endl;
}
int main()
{
    int n;
    cout << "enter the number " << endl;
    cin >> n;
    method1(n);
    method2(n);
    method3(n);
}
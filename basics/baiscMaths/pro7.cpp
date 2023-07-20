// Problem Statement : Find the gcd of two numbers.
#include <bits/stdc++.h>
using namespace std;
void method1(int a, int b)
{
    int gcd = 1;
    int n = min(a, b);
    for (int i = 1; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << " gcd =" << gcd << endl;
}
void method2(int a, int b)
{
    int n = min(a, b);
    for (int i = n; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << " gcd = " << i << endl;
            break;
        }
    }
}
void method3(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b << endl;
    else
        cout << a << endl;
    //  log phi( min(a,b)) time complety
}

int main()
{
    int a, b;
    cin >> a >> b;
    method1(a, b);
    method2(a, b);
    method3(a, b);
}

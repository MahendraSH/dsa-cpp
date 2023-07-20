// Problem Statement : Given a number, check whether it is prime or not .A prime number is a natural number that is only divisible by 1 and by itself.
#include <bits/stdc++.h>
using namespace std;
void method1(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << " not prime";
            return;
        }
    }
    cout << " prime ";
}
int main()
{
    int n;
    cin >> n;
    method1(n);
}
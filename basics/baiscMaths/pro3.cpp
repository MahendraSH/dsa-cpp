// Problem Statement : Given a number check if it is a palindrome.
#include <bits/stdc++.h>
using namespace std;

void method1(int n)
{
    int on =n;
    int res = 0;
    while (n > 0)
    {
        int last = n % 10;
        n = n / 10;
        res = res * 10 + last;
    }
    if (on == res)
    {
        cout << " palindrome";
    }
    else
    {
        cout << " not palindrome";
    }
}

int main()
{
    int n;
    cin >> n;
    method1(n);
}
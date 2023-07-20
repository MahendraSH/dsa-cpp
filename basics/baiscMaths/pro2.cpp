// Problem Statement : Given a number N reverse the number and print it.
#include <bits/stdc++.h>
using namespace std;
int method1(int n)
{
    int res = 0;
    while (n > 0)
    {
        int last = n % 10;
        n = n / 10;
        res = res * 10 + last;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << method1(n) << endl;
}

// 9. #Problem Statement : Given an integer N.Print the Fibonacci series up to the Nth term.
#include <bits/stdc++.h>
using namespace std;
void fibo1(int n)
{
    int t1 = 0;
    int t2 = 1;
    for (int i = 0; i <= n; i++)
    {
        cout << t1 << " ";
        int temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
}
int fibo2(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fibo2(n - 1) + fibo2(n - 2);
}
int main()
{
    int n;
    cin >> n;
    fibo1(n);
    cout << endl;
    cout<< fibo2(n) << endl;
    ;
}
// Problem Statement : Given a number, print all the divisors of the number.A divisor is a number that gives the remainder as zero when divided.
#include <bits/stdc++.h>
using namespace std;
void method1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
void method2(int n)
{
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                ans.emplace_back(n / i);
        }
    }
    for (int i = ans.size() - 1; i > -1; i--)
    {
        cout << ans.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    method1(n);
    method2(n);
}

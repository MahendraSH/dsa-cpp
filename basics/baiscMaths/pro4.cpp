// 4. #Problem Statement : Given a number, check if it is Armstrong Number or Not.
#include <bits/stdc++.h>
using namespace std;
void method1(int n)
{
    int on = n;
    int ans = 0;
    while (n > 0)
    {
        int last = n % 10;
        n = n / 10;
        ans += (last * last * last);
    }
    if (ans == on)
    {
        cout << " amonstrong ";
    }
    else
    {
        cout << "not  amonstrong ";
    }
}
int main()
{
    int n;
    cin >> n;
    method1(n);
}

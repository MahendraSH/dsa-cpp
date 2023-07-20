// 6. #Problem Statement : Given a number X, print its factorial.

#include <bits/stdc++.h>
using namespace std;
// Solution 1 : Iterative
void fact1(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << fact << endl;
    return;
}
// Solution 2 : Recursive
int fact2(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact2(n - 1);
}
int main()
{
    int n;
    cin >> n;
    fact1(n);
    cout << fact2(n);
}
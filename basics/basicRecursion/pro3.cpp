// 3. # Problem: Print from 1 to N using Recursion

#include <bits/stdc++.h>
using namespace std;
void printn(int n)
{
    if (n > 0)
    {

        printn(n - 1);
        cout << n << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    printn(n);
    cout << endl;
}

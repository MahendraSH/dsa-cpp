// 1. # Recursive code for printing numbers from 0 to n
#include <bits/stdc++.h>
using namespace std;
void printn(int n)
{
    if (n >= 0)
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

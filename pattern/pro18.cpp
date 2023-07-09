#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << (char)('A' + (n - j - 1)) << " ";
        }
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count =1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<count++<< " ";
        }
        cout << endl;
    }
}

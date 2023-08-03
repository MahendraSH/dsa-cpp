// 13.##Problem Statement : Given a Matrix, print the given matrix in spiral order.
/*
1 2 3
4 5 6

1 2 3 6 5 2 4
*/

#include <bits/stdc++.h>
using namespace std;
void printSpiral(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size();
    int rowstart = 0;
    int colend = m - 1;
    int rowend = n - 1;
    int colstart = 0;

    while (rowstart <= rowend && colstart <= colend)
    {
        for (int i = colstart; i <= colend; i++)
        {
            cout << a[rowstart][i] << " ";
        }
        rowstart++;

        for (int i = rowstart; i <= rowend; i++)
        {
            cout << a[i][colend] << " ";
        }
        colend--;
        if (rowstart <= rowend)
        {
            for (int i = colend; i >= colstart; i--)
            {
                cout << a[rowend][i] << " ";
            }
            rowend--;
        }
        if (colstart <= colend)
        {
            for (int i = rowend; i >=rowstart; i--)
            {
                cout << a[i][colstart] << " ";
            }
            colstart++;
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> a = vector<vector<int>>(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int tem;
            cin >> tem;
            a[i].emplace_back(tem);
        }
    }
    printSpiral(a);
}
// 11.##Problem Statement : Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.
#include <bits/stdc++.h>
using namespace std;
void setZeos1(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size();
    vector<int> rows = vector<int>(n, -1);
    vector<int> cols = vector<int>(m, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                rows[i] = 0;
                cols[j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (rows[i] == 0 || cols[j] == 0)
            {
                a[i][j] = 0;
            }
        }
    }
    return;
}
void setZeos2(vector<vector<int>> &a)
{
    int n = a.size();
    int m = a[0].size();
    int col0 = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                j == 0 ? col0 = 0 : a[0][j] = 0;
                a[i][0] = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (a[i][0] == 0 || a[0][j] == 0)
                a[i][j] = 0;
        }
    }
    if (a[0][0] == 0)
    {
        for (int i = 0; i < m; i++)
        {
            a[0][i] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            a[i][0] = 0;
        }
    }
    return;
}
void display(vector<vector<int>> a)
{
    for (auto i : a)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
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
    // setZeos1(a);
    // display(a);
    setZeos2(a);
    display(a);
}
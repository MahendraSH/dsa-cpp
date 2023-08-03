// 12.##Problem Statement : Given a matrix, your task is to rotate the matrix 90 degrees clockwise.
#include <bits/stdc++.h>
using namespace std;
void rotate90(vector<vector<int>> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
        reverse(a[i].begin(), a[i].end());
    return;
}
void display(vector<vector<int>> &a)
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
    vector<vector<int>> a = vector<vector<int>>(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tem;
            cin >> tem;
            a[i].emplace_back(tem);
        }
    }
    rotate90(a);
    display(a);
}
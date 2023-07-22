// Problem Statement : Given an array, we have to find the largest element in the array.
#include <bits/stdc++.h>
using namespace std;
void findMax1(int *a, int n)
{
    int maxele = a[0];
    for (int i = 0; i < n; i++)
    {
        maxele = max(a[i], maxele);
    }
    cout << "maxele = " << maxele << endl;
}
void findMax2(int *a, int n)
{
    static int maxele = INT_MIN;
    if (n > 0)
    {
        maxele = max(maxele, a[n - 1]);
        findMax2(a, n - 1);
    }
    else
    {
        cout << "maxele =" << maxele << endl;
        return;
    }
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    findMax1(a, n);
    findMax2(a, n);
}
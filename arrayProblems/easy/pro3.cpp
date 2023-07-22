// Problem Statement : Given an array of size n, write a program to check if the given array is sorted in(ascending / Increasing / Non - decreasing) order or not .If the array is sorted then return True, Else return False.
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << (isSorted(a, n) ? "true" : "false") << endl;
}
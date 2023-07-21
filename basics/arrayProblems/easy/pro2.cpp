// Problem Statement : Given an array, find the second smallest and second largest element in the array.Print ‘- 1’ in the event that either of them doesn’t exist.
#include <bits/stdc++.h>
using namespace std;
void secLar(int *a, int n)
{
    if (n == 1)
    {
        cout << "-1" << endl;
        return;
    }
    int maxele = INT_MIN, secMaxele = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (maxele < a[i])
        {
            secMaxele = maxele;
            maxele = a[i];
        }
        else if (secMaxele < a[i] && maxele != a[i])
        {
            secMaxele = a[i];
        }
    }
    cout << " sec max ele =" << secMaxele << endl;
}
void secSml(int *a, int n)
{
    if (n == 1)
    {
        cout << "-1" << endl;
        return;
    }
    int minele = INT_MAX, secMinele = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (minele > a[i])
        {
            secMinele = minele;
            minele = a[i];
        }
        else if (secMinele > a[i] && a[i] != minele)
        {
            secMinele = a[i];
        }
    }
    cout << " sec min ele =" << secMinele << endl;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    secLar(a, n);
    secSml(a, n);
}
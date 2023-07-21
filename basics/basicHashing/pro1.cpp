// Problem statement : Given an array, we have found the number of occurrences of each element in the array.
#include <bits/stdc++.h>
using namespace std;
void fre(int *a, int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
        
    }

    for (auto i : m)
        cout << i.first << " " << i.second << endl;
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

    fre(a, n);
}
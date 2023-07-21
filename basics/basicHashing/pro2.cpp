// Problem Statement : Given an array of size N.Find the highest and lowest frequency element.
#include <bits/stdc++.h>
using namespace std;
void minMaxFre(int *a, int n)
{

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    int minele = a[0];
    for (auto i : m)
    {
        if (m[minele] > i.second)
        {
            minele = i.first;
        }
    }
    int maxele = a[0];
    for (auto i : m)
    {
        if (m[maxele] < i.second)
        {
            maxele = i.first;
        }
    }
    cout << " min ele " << minele << " =>" << m[minele] << endl;
    cout << " max ele " << maxele << " =>" << m[maxele] << endl;
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
    minMaxFre(a, n);
}
// 10.##Problem Statement : You are given an array of ‘N’ integers.You need to find the length of the longest sequence which contains the consecutive elements.

#include <bits/stdc++.h>
using namespace std;
int findLarCon(vector<int> &a)
{

    sort(a.begin(), a.end());
    int n = a.size();
    int maxlen = 1;
    int count = 0;
    int last = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (a[i] - 1 == last)
        {
            count++;
        }
        else if (a[i] != last)
        {

            count = 1;
        }
        last = a[i];
        maxlen = max(maxlen, count);
    }
    return maxlen ;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        a.emplace_back(tem);
    }
    cout << findLarCon(a);
}

//

// 7.##Problem Statement : You are given a strictly increasing array ‘vec’ and a positive integer ‘k’.Find the ‘kth’ positive integer missing from ‘vec’.

#include <bits/stdc++.h>
using namespace std;
//  the number of missing number at any given index is  given by ( a[i]-(i+1) ) and the last missing number is i+(a[i]-(i+1))
// eg
//  [ 4,5,6 ]
//  at index 0 missage count = 3(a[i]-(i +1)) and last missing number is 3;
//  eg
//  [1 ,3, 6]
//  the missing count at index 2 = 3 (a[i]-(i+1) = 6-(2+1)) and last missing number is 5 (3+i=5 )
int kThMissing(vector<int> &a, int k)
{
    int start = 0;
    int end = a.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int missingCount = a[mid] - (mid + 1);

        if (missingCount < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return end + 1 + k;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }
    int k;
    cin >> k;
    cout << kThMissing(a, k);
}
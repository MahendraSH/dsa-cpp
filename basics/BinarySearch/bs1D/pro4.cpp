// 4. ## Problem Statement: You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.If the value is present in the array, then return its index. Otherwise, determine the index where it would be inserted in the array while maintaining the sorted order.
#include <bits/stdc++.h>
using namespace std;
//  interative
int lower(vector<int> &a, int target)
{
    int start = 0;
    int end = a.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
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
    int target;
    cin >> target;
    cout << lower(a, target) << endl;
}
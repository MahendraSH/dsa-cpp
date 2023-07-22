// Problem statement: You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers.
#include <bits/stdc++.h>
using namespace std;
//  interative
int ser1(vector<int> &a, int target)
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
    return -1;
}
//  recusive
int ser2(vector<int> &a, int start, int end, int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            return ser2(a, start, mid - 1, target);
        }
        else
        {
            return ser2(a, mid + 1, end, target);
        }
    }
    return -1;
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
    cout << ser1(a, target) << endl;
    cout << ser2(a, 0, (a.size() - 1), target) << endl;
}
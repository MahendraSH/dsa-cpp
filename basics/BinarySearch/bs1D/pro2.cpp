// Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the lower bound of x.
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
    return end;
}
int upper(vector<int> &a, int target)
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
    cout << upper(a, target) << endl;
}
// Problem Statement : Given an array of length N.Peak element is defined as the element greater than both of its neighbors.Formally, if ‘arr[i]’ is the peak element, ‘arr[i – 1]’ < ‘arr[i]’ and ‘arr[i + 1]’ < ‘arr[i]’.Find the index(0 - based) of a peak element in the array.If there are multiple peak numbers, return the index of any peak number.
#include <bits/stdc++.h>
using namespace std;
int findPeak1(vector<int> &a)
{
    int start = 0;
    int end = a.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (mid > start && mid < end && a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
            return mid;
        else if (mid < end && a[mid] > a[mid + 1])
        {
            end = mid - 1;
        }
        else if (mid < end && a[mid] < a[mid + 1])
        {
            start = mid + 1;
        }
    }

    return start;
}
int findPeak2(vector<int> &a)
{

    int start = 0;
    int end = a.size() - 1;

    while (start < end)
    {

        int mid = start + (end - start) / 2;

        if (a[mid] > a[mid + 1])
        {
            end = mid;
        }
        else if (a[mid] < a[mid + 1])
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
    cout << findPeak1(a) << endl;
    cout << findPeak2(a) << endl;
}
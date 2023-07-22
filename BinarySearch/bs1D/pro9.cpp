// 9.##Problem Statement : Given an integer array a of size N, sorted in ascending order(may contain duplicate values) and a target value k.Now the array is rotated at some pivot point unknown to you.Return True if k is present and otherwise, return False.
#include <bits/stdc++.h>
using namespace std;
int findPivote(vector<int> &a)
{
    int start = 0;
    int end = a.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid < end && a[mid] > a[mid + 1])
        {
            return mid;
        }
        else if (mid > start && a[mid - 1] > a[mid])
        {
            return mid - 1;
        }
        else if (a[mid] == a[start] && a[end] == a[mid])
        {
            if (start < end && a[start] > a[start + 1])
            {
                return start;
            }
            else
            {
                start++;
            }
            if (end > start && a[end - 1] > a[end])
            {
                return end - 1;
            }
            else
            {
                end--;
            }
        }
        else if (a[mid] > a[start] || (a[mid] == a[start] && a[mid] > a[end]))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
int biSer(vector<int> a, int start, int end, int target)
{
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
bool findTarget(vector<int> &a, int target)
{

    int pivote = findPivote(a);
    cout << "find pivote " << pivote << endl;
    int ans = biSer(a, 0, pivote, target);
    if (ans == -1)
    {
        ans = biSer(a, pivote + 1, a.size() - 1, target);
    }
    return (ans == -1) ? false : true;
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
    cout << findTarget(a, target);
}
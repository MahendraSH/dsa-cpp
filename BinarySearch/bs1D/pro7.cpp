
// 7.##Problem Statement : You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.
#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> a, int target)
{
    int ans = -1;
    int start = 0;
    int end = a.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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

    return ans;
}
int lastOcc(vector<int> a, int target)
{
    int ans = -1;
    int start = 0;
    int end = a.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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

    return ans;
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
    int first = firstOcc(a, target);
    int last = lastOcc(a, target);
    cout << " firt = " << first << endl;
    cout << "last = " << last << endl;
    cout << "number of occ = " << (last - first + 1) << endl;
}
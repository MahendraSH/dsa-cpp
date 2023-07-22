// Problem Statement : Given an array of N integers.Every number in the array except one appears twice.Find the single number in the array.

#include <bits/stdc++.h>
using namespace std;

int findIndexeleOccOnlyOnce(vector<int> &a)
{

    int start = 1;
    int end = a.size() - 2;
    if (a.size() == 1 || a[0] != a[1])
        return 0;
    if (a[end + 1] != a[end])
        return end + 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
        {
            return mid;
        }
        else if ((mid % 2 == 0 && a[mid] == a[mid + 1]) || (mid % 2 == 1 && a[mid] == a[mid - 1]))
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
    cout << a[findIndexeleOccOnlyOnce(a)] << endl;
}
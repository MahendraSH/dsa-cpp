// Problem Statement : Given an integer array arr of size N, sorted in ascending order(with distinct values).Now the array is rotated between 1 to N times which is unknown.Find the minimum element in the array.
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
        else if (mid > start && a[mid] < a[mid - 1])
        {
            return mid - 1;
        }
        else if (a[mid] > a[start])
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

int findMinIndex(vector<int> &a)
{

    int pivote = findPivote(a);
    cout << "find pivote " << pivote << endl;
    if (pivote < a.size() && pivote != -1)
    {
        return pivote + 1;
    }
    return 0;
}

int findMin(vector<int> &a)
{
    return a[findMinIndex(a)];
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
   cout <<  findMin(a)<< endl;
}
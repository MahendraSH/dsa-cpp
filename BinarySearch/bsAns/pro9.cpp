// 9.##Problem Statement : Given an array ‘arr of integer numbers, ‘ar[i]’ represents the number of pages in the ‘i - th’ book.There are a ‘m’ number of students, and the task is to allocate all the books to the students.Allocate books in such a way that : Each student gets at least one book.Each book should be allocated to only one student.Book allocation should be in a contiguous manner.You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.If the allocation of books is not possible.return -1

#include <bits/stdc++.h>
using namespace std;
int findSum(vector<int> &a)
{
    int sum = 0;
    for (int i : a)
    {
        sum += i;
    }
    return sum;
}
int findMax(vector<int> &a)
{
    int maxele = a[0];
    for (int i : a)
    {
        maxele = max(maxele, i);
    }
    return maxele;
}
int isPossible(vector<int> a, int m, int mid)
{
    int sum = 0;
    int count = 1;
    for (int i : a)
    {
        if (sum + i > mid)
        {
            count++;
            sum = i;
        }
        else
        {
            sum += i;
        }
    }
    return count > m ? 1 : -1;
}
int findAtmostPages(vector<int> &a, int m)
{
    int start = findMax(a);
    int end = findSum(a);
    if (m > a.size())
        return -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(a, m, mid) == 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
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
    int m;
    cin >> m;
    cout << findAtmostPages(a,m);
}
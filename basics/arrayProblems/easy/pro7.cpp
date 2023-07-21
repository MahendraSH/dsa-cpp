// Problem Statement : You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non - negative integers to the front by maintaining their order.
#include <bits/stdc++.h>
using namespace std;

void moveZerosEnd(int *a, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }
    for (; j < n; j++)
    {
        a[j] = 0;
    }
}

void display(int *a, int n)
{
    cout << "display arr : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void disVector(vector<int> &a)
{
    cout << "display vector : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void moveZerosEndvector(vector<int> &a)
{
    int j = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }
    for (; j < a.size(); j++)
    {
        a[j] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
        a.emplace_back(temp);
    }
    moveZerosEnd(arr, n);
    display(arr, n);
    moveZerosEndvector(a);
    disVector(a);
}

// 3.##Problem Statement : Given an array of N integers, write a program to implement the Insertion sorting algorithm.
#include <bits/stdc++.h>
using namespace std;
void sort_inseton(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i+1;
        while (j >0 && a[j - 1] > a[j])
        {
            swap(a[j - 1], a[j]);
            j--;
        }
    }
    
}
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort_inseton(a, n);
    display(a, n);
}
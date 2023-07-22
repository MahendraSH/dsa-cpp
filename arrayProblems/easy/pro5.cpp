// Problem Statement : Given an array of N integers, left rotate the array by one place.
#include <bits/stdc++.h>
using namespace std;

void rotateOneLeft(int *a, int n)
{
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
    return;
}
void rotateOneRight(int *a, int n)
{
    int temp = a[n - 1];
    for (int i = n-1; i > 0; i--)
    {
      a[i]=a[i-1];   
    }
    a[0] = temp;
    return;
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
    {
        cin >> a[i];
    }
    rotateOneLeft(a, n);
    display(a, n);
    rotateOneRight(a, n);
    display(a, n);
}
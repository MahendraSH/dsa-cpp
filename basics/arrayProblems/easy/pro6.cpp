// Problem Statement : Given an array of integers, rotating array of elements by k elements either left or right.
#include <bits/stdc++.h>
using namespace std;

void rotateKLeft(int *a, int n, int k)
{
    int *temp = new int[k];
    for(int i=0;i<k;i++){
        temp[i]=a[i];
    }
    for (int i = 0; i <n-k; i++)
    {
      a[i]=a[i+k];
    }
    for(int i=0;i<k;i++){
        a[i+k+1]=temp[i];

    }
    return ;
}
void rotateKRight(int *a, int n, int k)
{
    int *temp = new int[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = a[(n-k-1)+i];
    }
    for (int i = 0; i < k; i++)
    {
         a[i + k]=a[i];
    }
    for (int i = 0; i < k; i++)
    {
        a[i ] = temp[i];
    }
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
    int k;
    cin>>k;
    // rotateKLeft(a, n, k);
    // display(a, n);
    rotateKRight(a, n, k);
    display(a, n);
}

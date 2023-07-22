// Problem Statement : Given two sorted arrays, arr1, and arr2 of size n and m.Find the union of two sorted arrays.

#include <bits/stdc++.h>
using namespace std;
void disVector(vector<int> &a)
{
    cout << "display vector : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
//  using set    - this method can be used even if arrays are not sorted O(m+n* log(m+n))
vector<int> find_union_set(vector<int> a, vector<int> b)
{
    set<int> s;
    vector<int> ans;
    for (auto i : a)
    {
        s.emplace(i);
    }
    for (auto i : b)
    {
        s.emplace(i);
    }
    for (auto i : s)
    {
        ans.emplace_back(i);
    }
    return ans;
}

//  using two pointer method  - arrays must be sorted   O(m+n)
vector<int> find_union_two_pointer(vector<int> a, vector<int> b)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] != b[j])
        {
            if (a[i] < b[j])
            {
                if (ans.empty() == false && ans.back() == a[i])
                    i++;
                else
                {

                    ans.emplace_back(a[i]);
                    i++;
                }
            }
            else
            {
                
                if (ans.empty() == false && ans.back() == b[j])
                    j++;
                else
                {

                    ans.emplace_back(b[j]);
                    j++;
                }

                
            }
        }
        else
        {
            if (ans.empty() == false && ans.back() == b[j])
            {
                i++;
                j++;
            }
            else
            {

                ans.emplace_back(a[i]);
                i++;
                j++;
            }
        }
    }
    while (i < a.size())
    {
        if (ans.empty() == false && ans.back() == a[i])
            i++;
        else
        {

            ans.emplace_back(a[i]);
            i++;
        }
    }
    while (j < b.size())
    {
        if (ans.empty() == false && ans.back() == b[j])
            j++;
        else
        {
            ans.emplace_back(b[j]);
            j++;
        }
    }
    return ans;
}

int main()
{
    int m;
    cin >> m;
    vector<int> a;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }
    int n;
    cin >> n;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {

        int temp;
        cin >> temp;
        b.emplace_back(temp);
    }
    // vector<int> ans_set = find_union_set(a, b);
    // disVector(ans_set);
    vector<int> ans_two_pointer = find_union_two_pointer(a, b);
    disVector(ans_two_pointer);
}
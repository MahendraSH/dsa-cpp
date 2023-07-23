// 3. ## Problem Statement: A monkey is given ‘n’ piles of bananas, whereas the ‘ith’ pile has ‘a[i]’ bananas. An integer ‘h’ is also given, which denotes the time (in hours) for all the bananas to be eaten.Each hour, the monkey chooses a non - empty pile of bananas and eats ‘k’ bananas.If the pile contains less than ‘k’ bananas, then the monkey consumes all the bananas and won’t eat any more bananas in that hour. Find the minimum number of bananas ‘k’ to eat per hour so that the monkey can eat all the bananas within ‘h’ hours.
#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int> &a)
{
    int maxele = a[0];
    for (int i : a)
    {
        maxele = max(maxele, i);
    }
    return maxele;
}
int compareNeeded(vector<int> &a, int h, int mid)
{
    long long count = 0;

    for (int i : a)
    {

        count += i / mid + (i % mid == 0 ? 0 : 1);
    }

    if (count > h)
    {
        return 1;
    }
    return -1;
}
int findMINBannansPerHours(vector<int> &a, int h)
{

    int start = 1;
    int end = findMax(a);
    if (a.size() == h)
    {
        return end;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int val = compareNeeded(a, h, mid);

        if (val > 0)
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
    int n; // number of piles
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }
    int h;
    cin >> h;
    cout << findMINBannansPerHours(a, h);
}
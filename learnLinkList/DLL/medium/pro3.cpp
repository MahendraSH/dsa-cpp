// 3. ## Delete all occurrences of a key in … [codingninjas](https://www.codingninjas.com/studio/problems/remove-duplicates-from-a-sorted-doubly-linked-list_2420283)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};
Node *consDll(vector<int> a)
{
    Node *start = nullptr;
    Node *p = nullptr;
    for (int i : a)
    {
        Node *new_node = new Node(i);
        if (start = nullptr)
        {
            start = new_node;
        }
        else
        {
            p->next = new_node;
            new_node->prev = p;
        }
        p = new_node;
    }
    return start;
}
void display(Node *start)
{
    while (start)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
    return;
}
Node *removeDuplicates(Node *start)
{
    // Write your code here
    if (!start)
    {
        return start;
    }
    Node *p = start->next;
    while (p)
    {
        if (p->data == p->prev->data)
        {

            if (p->next)
            {
                p->next->prev = p->prev;
                p->prev->next = p->next;
                p = p->next;
            }
            else
            {
                p->prev->next = nullptr;
                p = nullptr;
            }
        }
        else
        {
            p = p->next;
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
        int tem;
        cin >> tem;
        a.emplace_back(tem);
    }
    Node *start = consDll(a);
    display(start);
}
// 1. ## Delete all occurrences of a key in … [codingninjas](https://www.codingninjas.com/studio/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461)

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
    Node(int data, Node *next, Node *prev) : data(data), next(next), prev(prev) {}
};
Node *delete_K(Node *start, int k)
{
    Node *p = start;
    while (p)
    {
        if (p->data == k)
        {
            if (p->prev == nullptr)
            {
                if (start->next == nullptr)
                {
                    return nullptr;
                }
                start = start->next;
                start->prev = nullptr;
                p = start;
            }
            else if (p->next)
            {
                p->prev->next = p->next;
                p->next->prev = p->prev;
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
Node *consDll(vector<int> a)
{
    Node *start = nullptr;
    Node *p = nullptr;
    for (int i : a)
    {
        Node *new_node = new Node(i);
        if (!start)
            start = new_node;
        else
        {
            new_node->prev = p;
            p->next = new_node;
        }
        p = new_node;
    }
    return start;
}
void display(Node *start)
{
    while (start != nullptr)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
    return;
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
    int k;
    cin >> k;
    Node *start = consDll(a);
    // display(start);
    start = delete_K(start, k);
    display(start);
}
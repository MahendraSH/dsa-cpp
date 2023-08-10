// 8. ## Segregate Even And Odd Nodes In a Linked List [codingninjas](https://www.codingninjas.com/studio/problems/segregate-even-and-odd-nodes-in-a-linked-list_1116100) [leetcode](https://leetcode.com/problems/palindrome-linked-list/)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int data) : data(data), next(nullptr) {}
};
Node *segregateEvenOdd(Node *start)
{
    Node *new_start = nullptr;
    Node *p = nullptr;
    Node *t = start;
    while (t)
    {
        if (t->data % 2 == 0)
        {
            Node *new_node = new Node(t->data);
            if (p == nullptr)
            {
                new_start = new_node;
                p = new_node;
            }
            else
            {
                p->next = new_node;
                p = new_node;
            }
        }
        t = t->next;
    }
    t = start;
    while (t)
    {
        if (t->data % 2 == 1)
        {
            Node *new_node = new Node(t->data);
            if (p == nullptr)
            {
                new_start = new_node;
                p = new_node;
            }
            else
            {
                p->next = new_node;
                p = new_node;
            }
        }
        t = t->next;
    }
    return new_start;
}
void display(Node *start)
{
    while (start)
    {
        cout << start->data << " ";
        start = start->next;
    }
    return;
}
Node *constrcutLL(vector<int> a)
{
    Node *start = nullptr;
    Node *p = start;
    for (int i : a)
    {
        Node *new_node = new Node(i);
        if (start == nullptr)
        {
            start = new_node;
        }
        else
        {
            p->next = new_node;
        }
        p = new_node;
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
    Node *start = constrcutLL(a);

    // display(start);
    start = segregateEvenOdd(start);
    display(start);
}
// 14 . ## Add 1 to a number represented by LL [codingninjas](https://www.codingninjas.com/studio/problems/add-one-to-a-number-represented-as-linked-list_920557?leftPanelTab=1)
#include "bits/stdc++.h"
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};
Node *revrse(Node *start)
{
    Node *prvios = NULL;
    while (start)
    {
        Node *next_node = start->next;
        start->next = prvios;
        prvios = start;
        start = next_node;
    }
    return prvios;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.
    Node *start = revrse(head);
    Node *p = start;

    while (p)
    {
        if (p->data < 9)
        {
            p->data += 1;
            break;
        }
        else if (p->next)
        {
            p->data = 0;
        }
        else
        {
            p->data = 0;
            p->next = new Node(1);
            break;
        }
        p = p->next;
    }

    start = revrse(start);
    return start;
}

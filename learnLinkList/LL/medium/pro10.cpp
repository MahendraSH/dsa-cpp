// 10. ## Delete Middle Node  [codingninjas](https://www.codingninjas.com/studio/problems/delete-middle-node_763267?leftPanelTab=0) [leetcode](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)
#include <bits/stdc++.h>
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

/*
Following is the class structure of the Node class:

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
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *deleteMiddle(Node *start)
{
    // Write your code here.

    if (!start)
    {
        return start;
    }
    if (!start->next)
    {
        return start->next;
    }
    int n = 0;
    Node *p = start;
    while (p)
    {
        p = p->next;
        n++;
    }
    n = (n) / 2 + 1;
    p = start;
    for (int i = 0; i < n - 2; i++)
    {
        p = p->next;
    }
    p->next = p->next->next;
    return start;
}

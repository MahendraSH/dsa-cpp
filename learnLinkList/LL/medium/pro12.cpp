// 12. ## ort a LL of 0's 1's and 2's by cha…  [codingninjas](https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937)
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

Node *sortList(Node *start)
{
    // Write your code here.
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    Node *p = start;
    while (p)
    {
        if (p->data == 0)
            count0++;
        else if (p->data == 1)
            count1++;
        else
        {
            count2++;
        }
        p = p->next;
    }
    // cout<<   "count0 "<< count0<<endl;
    p = start;
    for (int i = 1; i <= count0; i++)
    {
        p->data = 0;
        p = p->next;
    }
    for (int i = 1; i <= count1; i++)
    {
        p->data = 1;
        p = p->next;
    }
    for (int i = 1; i <= count2; i++)
    {
        p->data = 2;
        p = p->next;
    }
    return start;
}
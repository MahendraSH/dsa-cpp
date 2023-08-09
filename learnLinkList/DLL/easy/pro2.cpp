// 2. ## Insert a node in DLL[codingninjas](https://www.codingninjas.com/studio/problems/insert-at-end-of-doubly-linked-list_8160464)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
    Node(int data, Node *next, Node *prev) : data(data), next(next), prev(prev) {}
};
Node *insert_begin(Node *start, int val)
{
    Node *new_node = new Node(val);
    if (start == nullptr)
    {
        return new_node;
    }
    start->prev = new_node;
    new_node->next = start;
    return new_node;
}
Node *insert_end(Node *start, int val)
{
    Node *new_node = new Node(val);
    if (start == nullptr)
    {
        return new_node;
    }
    Node *p = start;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = new_node;
    new_node->prev = p;
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
    cout << " Enter 1 for inset begin " << endl;
    cout << "Enter 2 for insert end" << endl;
    cin >> n;
    Node *start = nullptr;
    while (n == 1 || n == 2)
    {
        int val;
        cout << "Enter a val to insert" << endl;
        cin >> val;

        if (n == 1)
        {
            start = insert_begin(start, val);
        }
        else if (n == 2)
        {
            start = insert_end(start, val);
        }
        display(start);
        cout << " Enter 1 for inset begin " << endl;
        cout << "Enter 2 for insert end" << endl;
        cin >> n;
    }
}
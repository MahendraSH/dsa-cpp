// 4. ## Count nodes of linked list.[codingninjas](https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884)
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int data) : data(data), next(nullptr) {}
    Node(int data, Node *next) : data(data), next(next) {}
};
void display(Node *start)
{
    if (start == nullptr)
    {
        cout << " linklist empty " << endl;
        return;
    }
    while (start != nullptr)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
    return;
}
Node *insert_begin(Node *start, int val)
{
    Node *new_node = new Node(val);
    if (start == nullptr)
    {
        start = new_node;
        return start;
    }
    new_node->next = start;
    return new_node;
}
Node *insert_end(Node *start, int val)
{
    Node *new_node = new Node(val);
    if (start == nullptr)
    {
        start = new_node;
        return start;
    }
    Node *p = start;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = new_node;
    return start;
}
Node *delete_end(Node *start)
{
    if (start == nullptr)
    {
        cout << " linklist empty" << endl;
        return start;
    }
    Node *p = start;
    if (start->next == nullptr)
    {
        return nullptr;
    }
    while (p->next->next != nullptr)
    {
        p = p->next;
    }
    p->next = nullptr;
    return start;
}

int length(Node *start)
{
    int count = 0;
    while (start != nullptr)
    {
        start = start->next;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout << " Enter 1 for insert begin " << endl;
    cout << " Enter 2 for insert end " << endl;
    cout << " Enter 3 for delete end " << endl;

    cin >> n;
    Node *start = nullptr;

    while (n < 4 && n > 0)
    {
        if (n == 1)
        {
            int val;
            cout << " Enter val to insert " << endl;
            cin >> val;
            start = insert_begin(start, val);
            display(start);
        }
        else if (n == 2)
        {
            int val;
            cout << " Enter val to insert " << endl;
            cin >> val;
            start = insert_end(start, val);
            display(start);
        }
        else
        {
            start = delete_end(start);
            display(start);
        }
        cout << " Enter 1 for insert begin " << endl;
        cout << " Enter 2 for insert end " << endl;
        cout << " Enter 3 for delete end " << endl;

        cin >> n;
    }
    cout << " length = " << length(start) << endl;
}
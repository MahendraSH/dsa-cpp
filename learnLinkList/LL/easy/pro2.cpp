// 2. ## Problem Statement: For a given Singly LinkedList, insert a node at the beginning of the linked list.[codingninjas](https://www.codingninjas.com/studio/problems/insert-node-at-the-beginning_8144739)

class Node
{
public:
    int data;
    Node *next;

    Node() : data(0), next(nullptr) {}
    Node(int data) : data(data), next(nullptr) {}
    Node(int data, Node *next) : data(data), next(next) {}
};
#include <bits/stdc++.h>
using namespace std;

Node *insertAtFirst(Node *start, int newValue)
{
    // Write your code her
    Node *p = start;
    Node *newNode = new Node(newValue);
    if (start == nullptr)
    {
        start = newNode;
        return start;
    }
    newNode->next = start;

    return newNode;
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
    cout << " enter 1 for insert begin " << endl;
    cin >> n;
    Node *start = nullptr;
    while (n == 1)
    {
        int ele;
        cout << " Enter ele  to insert " << endl;
        cin >> ele;
        start = insertAtFirst(start, ele);
        display(start);
        cout << " enter 1 for insert begin " << endl;
        cin >> n;
    }
}
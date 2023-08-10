// 6. ## ength of Loop in LL [codingninjas](https://www.codingninjas.com/studio/problems/find-length-of-loop_8160455)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *find_starting_of_loop(Node *start)
{
    Node *slow = start;
    Node *fast = start;
    if (start && start->next)
    {
        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                while (slow != start)
                {
                    slow = slow->next;
                    start = start->next;
                }
                return start;
            }
        }
    }
    return nullptr;
}
int lengthOfLoop(Node *start)
{
    // Write your code here
    Node *start_loop = find_starting_of_loop(start);
    if (start_loop != nullptr)
    {
        int count = 1;
        Node *p = start_loop->next;
        while(p!=start_loop){
            p=p->next;
            count++;
        }
        return count;
    }
    return 0;
}

int main()
{
}

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *insert_begin(Node *start)
{
    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    scanf("%d", &new_node->data);
    if (start == NULL)
    {
        start = new_node;
        new_node->next = NULL;
    }
    else
    {
        new_node->next = start;
        start = new_node;
    }
    return start;
}

Node *insert_position(Node *start)
{
    int position, count = 1;
    scanf("%d", &position);
    if (position == 1)
    {
        start = insert_begin(start);
        return start;
    }

    Node *ptr = start;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    if (position > count)
    {
        printf("There are less than %d elements in the linked list\n", position);
        return start;
    }
    Node *new_node, *preptr;
    new_node = (Node *)malloc(sizeof(Node));
    printf("Enter the element to be inserted\n");
    scanf("%d", &new_node->data);
    ptr = start;
    for (int i = 0; i < position - 1; i++)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    return start;
}

Node *delete_ele(Node *start)
{
    if (start == 0)
    {
        printf("Linked list is empty\n");
    }
    Node *p, *ptr;
    int ele;
    scanf("%d", &ele);
    if (start == 0)
    {
        //  printf("start is NULL\n");
        return start;
    }
    p = start;
    if (p->data == ele)
    {
        Node *s = start->next;
        free(p);
        //  printf("first \n");
        return s;
    }
    int count = 0;
    while (p != 0)
    {
        count++;
        if (ele == p->data)
        {
            //  printf("%d = count\n",count);
            break;
        }
        p = p->next;
    }
    if (p == 0)
    {
        printf("%d is not present in the linked list\n", ele);

        return start;
    }
    ptr = start;
    for (int i = 0; i < count - 1; i++)
    {
        ptr = ptr->next;
    }
    p = ptr->next;
    ptr->next = ptr->next->next;
    free(p);
    return start;
}

Node *search_update(Node *start)
{
    int ele;
    scanf("%d", &ele);
    // printf("Enter new value\n");
    // scanf("%d",&val);
    Node *ptr;

    ptr = start;

    while (ptr != NULL)
    {
        if (ptr->data == ele)
        {
            printf("%d is present\n", ptr->data);
            return start;
        }
        ptr = ptr->next;
    }
    printf("%d is not present in the linked list\n", ele);

    return start;
}

void display(Node *start)
{
    Node *ptr;
    if (start == NULL)
    {
        printf("{}\n");
        return;
    }
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    int op;
    Node *start = NULL;
    printf("1 Add at Beginning\n2 Add at position\n3 Delete any node\n4 search and update\n5 Display\n6 Exit\n");
    while (1)
    {
        printf("Enter your choice\n");
        scanf("%d", &op);
        if (op > 0 && op <= 6)
        {
            switch (op)
            {
            case 1:
                printf("Enter the element to be inserted\n");
                start = insert_begin(start);
                break;
            case 2:
                printf("Enter the position at which you want to add another node\n");
                start = insert_position(start);
                break;
            case 3:
                printf("Enter the element to be deleted\n");
                start = delete_ele(start);
                break;
            case 4:
                printf("Enter the element to be searched\n");
                start = search_update(start);
                break;
            case 5:
                printf("Elements in the List are ");
                display(start);
                break;
            case 6:
                return 0;
            }
        }
        else
        {
            printf("Enter a correct choice\nEnter your choice\n");
            scanf("%d", &op);
        }
    }

    return 0;
}

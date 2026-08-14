#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insertEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void display(struct Node *head)
{
    printf("Linked List: ");

    while (head != NULL)
    {
        printf("%d", head->data);

        if (head->next != NULL)
            printf(" -> ");

        head = head->next;
    }

    printf(" -> NULL\n");
}

void deleteValue(struct Node **head, int value)
{
    if (*head == NULL)
        return;

    struct Node *temp = *head;

    if (temp->data == value)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp->next != NULL && temp->next->data != value)
        temp = temp->next;

    if (temp->next != NULL)
    {
        struct Node *deleteNode = temp->next;
        temp->next = deleteNode->next;
        free(deleteNode);
    }
}

void search(struct Node *head, int value)
{
    int position = 1;

    while (head != NULL)
    {
        if (head->data == value)
        {
            printf("%d found at position %d\n", value, position);
            return;
        }

        head = head->next;
        position++;
    }

    printf("%d not found\n", value);
}

int main()
{
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    printf("Initial List:\n");
    display(head);

    printf("\nAfter deleting 30:\n");
    deleteValue(&head, 30);
    display(head);

    printf("\nSearching 40:\n");
    search(head, 40);

    printf("\nSearching 30:\n");
    search(head, 30);

    return 0;
}

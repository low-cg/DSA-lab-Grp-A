#include <stdio.h>

#define MAX 100

struct Heap
{
    int arr[MAX];
    int size;
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(struct Heap *h, int value)
{
    if (h->size == MAX - 1)
    {
        printf("Heap is full!\n");
        return;
    }

    h->size++;
    int i = h->size;

    h->arr[i] = value;

    while (i > 1 && h->arr[i] > h->arr[i / 2])
    {
        swap(&h->arr[i], &h->arr[i / 2]);
        i = i / 2;
    }
}

void heapifyDown(struct Heap *h, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= h->size && h->arr[left] > h->arr[largest])
        largest = left;

    if (right <= h->size && h->arr[right] > h->arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&h->arr[i], &h->arr[largest]);
        heapifyDown(h, largest);
    }
}

void deleteMax(struct Heap *h)
{
    if (h->size == 0)
    {
        printf("Heap is empty!\n");
        return;
    }

    printf("Deleted: %d\n", h->arr[1]);

    h->arr[1] = h->arr[h->size];
    h->size--;

    heapifyDown(h, 1);
}

void display(struct Heap *h)
{
    if (h->size == 0)
    {
        printf("Heap is empty!\n");
        return;
    }

    printf("Max Heap: ");

    for (int i = 1; i <= h->size; i++)
        printf("%d ", h->arr[i]);

    printf("\n");
}

int main()
{
    struct Heap h;
    h.size = 0;

    int choice, value;

    while (1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete Max\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            insert(&h, value);
            break;

        case 2:
            deleteMax(&h);
            break;

        case 3:
            display(&h);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

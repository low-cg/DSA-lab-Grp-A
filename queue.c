#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *arr;
    int front;
    int rear;
    int cap;
} Queue;

Queue* init(int c) {
    Queue *q = (Queue*)malloc(sizeof(Queue));
    if (q == NULL) exit(1);
    q->cap = c;
    q->front = 0;
    q->rear = -1;
    q->arr = (int*)malloc(q->cap * sizeof(int));
    if (q->arr == NULL) {
        free(q);
        exit(1);
    }
    return q;
}

int isFull(Queue *q) {
    return q->rear == q->cap - 1;
}

int isEmpty(Queue *q) {
    return q->front > q->rear;
}

void enq(Queue *q, int val) {
    if (isFull(q)) {
        printf("Queue Full!\n");
        return;
    }
    q->arr[++q->rear] = val;
    printf("%d enqueued.\n", val);
}

int deq(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Empty!\n");
        return -1;
    }
    return q->arr[q->front++];
}

void view(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue empty.\n");
        return;
    }
    printf("Queue: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

void clean(Queue *q) {
    if (q != NULL) {
        if (q->arr != NULL) free(q->arr);
        free(q);
    }
}

int main() {
    int n, ch, v;

    printf("Enter capacity: ");
    scanf("%d", &n);

    Queue *q = init(n);

    while (1) {
        printf("\n1.Enqueue 2.Dequeue 3.View 4.Exit\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Value: ");
                scanf("%d", &v);
                enq(q, v);
                break;
            case 2:
                v = deq(q);
                if (v != -1) printf("Dequeued: %d\n", v);
                break;
            case 3:
                view(q);
                break;
            case 4:
                clean(q);
                exit(0);
            default:
                printf("Invalid!\n");
        }
    }
    return 0;
}
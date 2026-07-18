#include <iostream>
using namespace std;

typedef struct {
    int *arr;
    int front;
    int rear;
    int cap;
} Queue;

Queue* init(int c) {
    Queue *q = new Queue;
    q->cap = c;
    q->front = 0;
    q->rear = -1;
    q->arr = new int[q->cap];
    return q;
}

bool isFull(Queue *q) {
    return q->rear == q->cap - 1;
}

bool isEmpty(Queue *q) {
    return q->front > q->rear;
}

void enq(Queue *q, int val) {
    if (isFull(q)) {
        cout << "Full!\n";
        return;
    }
    q->arr[++q->rear] = val;
    cout << "+" << val << "\n";
}

int deq(Queue *q) {
    if (isEmpty(q)) {
        cout << "Empty!\n";
        return -1;
    }
    return q->arr[q->front++];
}

void view(Queue *q) {
    if (isEmpty(q)) {
        cout << "Empty.\n";
        return;
    }
    cout << "Q: ";
    for (int i = q->front; i <= q->rear; i++) {
        cout << q->arr[i] << " ";
    }
    cout << "\n";
}

void clean(Queue *q) {
    if (q != nullptr) {
        delete[] q->arr;
        delete q;
    }
}

int main() {
    int n, ch, v;

    cout << "Cap: ";
    cin >> n;
    Queue *q = init(n);

    while (true) {
        cout << "1.Enq 2.Deq 3.View 4.Exit: ";
        cin >> ch;

        if (ch == 1) {
            cout << "Val: ";
            cin >> v;
            enq(q, v);
        } else if (ch == 2) {
            v = deq(q);
            if (v != -1) cout << "-" << v << "\n";
        } else if (ch == 3) {
            view(q);
        } else if (ch == 4) {
            clean(q);
            break;
        }
    }
    return 0;
}
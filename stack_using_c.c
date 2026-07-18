#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;
    int top;
    int cap;
} Stack;

Stack* init(int c) {
    Stack *s = (Stack*)malloc(sizeof(Stack));
    if (s == NULL) exit(1);
    s->cap = c;
    s->top = -1;
    s->arr = (int*)malloc(s->cap * sizeof(int));
    if (s->arr == NULL) {
        free(s);
        exit(1);
    }
    return s;
}

int isFull(Stack *s) {
    return s->top == s->cap - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int val) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++s->top] = val;
    printf("%d pushed.\n", val);
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->arr[s->top--];
}

int peek(Stack *s) {
    if (isEmpty(s)) return -1;
    return s->arr[s->top];
}

void view(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack empty.\n");
        return;
    }
    for (int i = s->top; i >= 0; i--) {
        printf("| %d |\n", s->arr[i]);
    }
    printf("-----\n");
}

void clean(Stack *s) {
    if (s != NULL) {
        if (s->arr != NULL) free(s->arr);
        free(s);
    }
}

int main() {
    int n, ch, v;

    printf("Enter capacity: ");
    scanf("%d", &n);

    Stack *s = init(n);

    while (1) {
        printf("\n1.Push 2.Pop 3.Peek 4.View 5.Exit\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Value: ");
                scanf("%d", &v);
                push(s, v);
                break;
            case 2:
                v = pop(s);
                if (v != -1) printf("Popped: %d\n", v);
                break;
            case 3:
                v = peek(s);
                if (v != -1) printf("Top: %d\n", v);
                break;
            case 4:
                view(s);
                break;
            case 5:
                clean(s);
                exit(0);
            default:
                printf("Invalid!\n");
        }
    }
    return 0;
}
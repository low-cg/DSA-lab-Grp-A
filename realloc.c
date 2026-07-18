#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter No of gamers: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    printf("Before assigning:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("After assigning position :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    n = n + 5; 
    
    int *temp = realloc(ptr, n * sizeof(int)); 

    if (temp == NULL) {
        printf("Resizing failed!\n");
        free(ptr);
        exit(0);
    }
    
    ptr = temp; 

    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("After realloc, updated positions :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr); 

    return 0;
}
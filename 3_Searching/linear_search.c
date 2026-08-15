#include <stdio.h>

int main()
{
    int n, i, key, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("%d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("%d not found in the array\n", key);
    }

    return 0;
}

// Q.16)Write a program in C to search and 
// display the position of an element in one dimensional array.



#include <stdio.h>

int main() {
    int n, key, pos = -1;
    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i + 1;   // position starts from 1
            break;
        }
    }

    if(pos != -1) {
        printf("Element found at position %d", pos);
    } else {
        printf("Element not found");
    }

    return 0;
}

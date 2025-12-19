#include <stdio.h>

int main() {
    int arr[5] = {5, 8, 2, 9, 3};
    int target = 9;
    int found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}

#include <stdio.h>
int main() {
    int arr[5] = {1, -2, -3, 4, 1};
    int max = 0;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum = sum + arr[i];
        if (sum < 0) {
            sum = 0;
        } else if (max < sum) {
            max = sum;
        }
    }

    printf("Maximum Subarray Sum = %d", max);
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int flag = 1;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "Array is Palindrome";
    else
        cout << "Array is not Palindrome";

    return 0;
}

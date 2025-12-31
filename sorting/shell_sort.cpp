#include<iostream>
using namespace std;

void shell_sort(int a[], int n);

int main(){
    int arr[100];
    int n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    shell_sort(arr, n);

    cout << "Sorted array is: ";
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

void shell_sort(int a[], int n){
    int gap, i, j, temp;

    for(gap = n/2; gap > 0; gap = gap/2){
        for(i = gap; i < n; i++){
            temp = a[i];
            for(j = i; j >= gap && a[j-gap] > temp; j = j-gap){
                a[j] = a[j-gap];
            }
            a[j] = temp;
        }
    }
}

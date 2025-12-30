#include<iostream>
using namespace std;

void bubble_sort(int a[], int n);   // function prototype

int main(){
    int arr[100];
    int n, i;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    cout << "Sorted array is: ";
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

void bubble_sort(int a[], int n){
    int temp, i, j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

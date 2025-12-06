#include<iostream>
using namespace std;

int pass_arr(int p[], int n){
    int s = 0;

    for(int i = 0; i < n; i++){
        s = s + p[i];
    }

    return s;
}

int main(){
    int arr[10], sum = 0;

    cout << "Enter the array elements:" << endl;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    sum = pass_arr(arr, 10);

    cout << "The sum of array elements = " << sum;
}

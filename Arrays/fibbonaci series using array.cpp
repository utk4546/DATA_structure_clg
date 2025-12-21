#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "size of array = ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid size";
        return 0;
    }

    int arr[n];

    arr[0] = 0;
    if(n > 1){
        arr[1] = 1;
    }

    for(int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout << "Fibonacci series is:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}

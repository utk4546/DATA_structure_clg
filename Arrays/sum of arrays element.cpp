#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    int sum =0;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"the sum of array elements is = "<<sum<<endl;
    }


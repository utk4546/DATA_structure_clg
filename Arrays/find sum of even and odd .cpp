#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    int even_sum =0;
    int odd_sum=0;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
        even_sum=even_sum+arr[i];
        else{
            odd_sum=odd_sum+arr[i];
        }
    }
    cout<<"sum of even no = "<<even_sum<<endl;
     cout<<"sum of odd no = "<<odd_sum<<endl;

}
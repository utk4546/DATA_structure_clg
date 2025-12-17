#include<iostream>
using namespace std;

int main(){
    int n;
    float avrg;
     int sum=0;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements off array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
     }
     cout<<sum;
    avrg=sum/n;
    cout<<"average of array elemnts = "<<avrg;
}
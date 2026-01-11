#include<iostream>
using namespace std;

int main(){
    int n;
    float avrg;
     int sum=0;
    cout<<"Enter The Size Of Array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements Off Array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
     }
     cout<<sum;
    avrg=sum/n;
    cout<<"Average of Array Elemnts = "<<avrg;

}

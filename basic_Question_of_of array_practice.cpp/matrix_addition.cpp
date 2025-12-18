#include<iostream>
using namespace std;
int main(){
    int n;
    int i,j;

    cout<<"enter the size of first matrix = "<<endl;
    cin>>n;
    int arr1[n][n],arr2[n][n],sum[n][n];
    cout<<"enter the elements of first matrix ="<<endl;
    for( i=0;i<n;i++){
        for(  j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter the second matrix"<<endl;
     for( i=0;i<n;i++){
    for( j=0;j<n;j++){
        cin>>arr2[i][j];
    }
 }

 for( i=0;i<n;i++){
    for( j=0;j<n;j++){
        sum[i][j]=arr1[i][j]+arr2[i][j];
    }
 }
 cout<<"sum of both matrix"<<endl;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<< sum[i][j];
    }
 cout<<"  "<<endl;
 }





}
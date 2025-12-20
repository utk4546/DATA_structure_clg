#include<iostream>
using namespace std;
int main(){
    int n;
    int i,j;

    cout<<"enter the size of first matrix = "<<endl;
    cin>>n;
    int arr1[n][n],arr2[n][n],mul[n][n];
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
} 
#include <bits/stdc++.h>
using namespace std;  
int main (){
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array = "<<endl;
    for(int i=0;i<5;i++){
    cin>>arr[i];
    }
    char word[n];
    cout<<"enter the character array elements= "<<endl;
    for(int i=0;i<5;i++){
    cin>>word[i];
    }
    char msg[n];
    cout<<"enter the msg"<<endl;
    for(int i=0;i<5;i++){
    cin>>msg[i];
    }
    cout<<"arrau declaration with initializers"<<endl;
     for(int i=0;i<5;i++){
    cout<<msg[i];
    }
     for(int i=0;i<5;i++){
    cout<<word[i]<<endl;
    }

    for(int i=0;i<5;i++){
  cout<<arr[i]<<endl;
    }
    
    return 0;

}
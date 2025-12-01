#include<iostream>
using namespace std;
struct node {
    int data ;
    node *next;
};
node *first,*temp,*ttemp,*p,*q;
void init(){
    first=temp=ttemp=NULL;
}
void create_first(int x){
    first=new node ;
    first->data=x;
    first->next=first;
}
void add_node(int x){
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=x;
    ttemp->next=temp;
    temp->next=ttemp;
}
void disp(){
temp=first;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;    }
while(temp!=first);
    }
int main (){
    init();
    create_first(10);
    add_node(20);
    disp();
}
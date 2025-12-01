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
void addnode_before_givendata(int x,int y){
    temp=first;
    while(temp->next->data!=x){
       temp=temp->next;
    }
    ttemp=temp->next;
    p=new node;
    p->data=y;
    p->next=ttemp;
      temp->next=p;

    
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
    add_node(30);
    add_node(40);
    add_node(50);
    addnode_before_givendata(40,60);

    disp();
}
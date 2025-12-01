#include<iostream>
using namespace std;

struct node {
    int data;
    node *next, *prev;
};

node *first, *temp,*ttemp, *p;

void init() {
    first = temp = p = NULL;
}

void create_first(int val) {
    first = new node;
    first->data = val;
    first->next = NULL;
    first->prev = NULL;
}

void add_node(int x) {
    temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    p = new node;
    p->data = x;
    p->next = NULL;
    p->prev = temp;

    temp->next = p;   
}
void add_after_givendata(int x,int y) {
    temp=first;
    while(temp->data!=x){
        temp=temp->next;
    }
    ttemp=temp->next;
    p=new node;
    p->data=y;
    p->next=ttemp;
    p->prev=temp;
    temp->next=p;
    ttemp->prev=p;
}

void disp() {
    temp = first;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    init();
    create_first(10);
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    add_after_givendata(40,60);
    disp();
}

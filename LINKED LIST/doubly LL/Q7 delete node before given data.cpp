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


void delete_node_before_given_data(int x){
    
    temp=first;
    while(temp->next->data!=x){
        temp=temp->next;
    }
ttemp=temp->prev;
p=temp->next;
ttemp->next=p;
p->prev=ttemp;
temp->next=temp->prev=NULL;
delete temp;
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
    delete_node_before_given_data(40);
    disp();
}

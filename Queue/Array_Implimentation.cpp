#include <bits/stdc++.h>
using namespace std;

#define MAX 5

struct Queue {
    int data[MAX];
    int front, rear;
};

Queue q1;
Queue *p;

void init() {
    p = &q1;
    p->front = p->rear = -1;
}

int full() {
    return (p->rear == MAX - 1);
}

int empty() {
    return (p->front == -1);
}

void EnQ(int x) {
    if (full()) {
        cout << "Queue Full\n";
        return;
    }
    if (p->rear == -1)
        p->front = p->rear = 0;
    else
        p->rear++;

    p->data[p->rear] = x;
}
void display() {
    if (empty()) {
        cout << "Queue Empty\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = p->front; i <= p->rear; i++) {
        cout << p->data[i] << " ";
    }
    cout << endl;
}


int DeQ() {
    if (empty()) {
        cout << "Queue Empty\n";
        return -1;
    }

    int x = p->data[p->front];

    if (p->front == p->rear)
        p->front = p->rear = -1;
    else
        p->front++;

    return x;
}

int main() {
    init();

    EnQ(10);
    EnQ(20);
    EnQ(30);
    EnQ(40);
    EnQ(50);
    display();

    cout << "Deleted: " << DeQ() << endl;
    cout << "Deleted: " << DeQ() << endl;
    cout<<"after deletion ";
    display();

 }

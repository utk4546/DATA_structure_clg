 #include <bits/stdc++.h>
using namespace std;

struct LQueue {
    int data;
    LQueue *next;
};

LQueue *front, *rear, *temp;

void init() {
    front = rear = NULL;
}

void EnQ(int x) {
    temp = new LQueue;

    if (temp == NULL) {
        cout << "Queue Overflow\n";
        return;
    }

    temp->data = x;
    temp->next = NULL;

    // If queue is empty
    if (front == NULL && rear==NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

int DeQ() {
    int x;

    if (front == NULL) {
        cout << "Queue Underflow\n";
        return -1;
    }

    x = front->data;
    temp = front;

    if (front == rear) {
        front = rear = NULL;
    } else {
        front = front->next;
    }

    delete temp;
    return x;
}

int main() {
    init();

    EnQ(10);
    EnQ(20);
    EnQ(30);
    EnQ(40);
    cout<<"deleted data"<<endl;
    cout << DeQ() << endl;
    cout << DeQ() << endl;

    return 0;
}

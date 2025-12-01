 #include<iostream>
 using namespace std;

struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=NULL;
}

void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=NULL;
}
void disp()
{
 temp=first;
 while(temp!=NULL)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=NULL)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=NULL;
  temp->next=ttemp;
}
void Add_after(int x,int y){
    temp=first;
    while(temp->data!=x ){
        temp=temp->next;
    }
    p=new node;
    p->data=y;
    p->next=temp->next;
    temp->next=p;
}
void swapNodes(int n, int m) {
    if (n == m) return;

    node *prevN = NULL, *currN = first;
    for (int i = 1; currN != NULL && i < n; i++) {
        prevN = currN;
        currN = currN->next;
    }

    node *prevM = NULL, *currM = first;
    for (int i = 1; currM != NULL && i < m; i++) {
        prevM = currM;
        currM = currM->next;
    }

    // If either doesn't exist
    if (currN == NULL || currM == NULL)
        return;

    // Connect previous nodes
    if (prevN != NULL)
        prevN->next = currM;
    else
        first = currM;

    if (prevM != NULL)
        prevM->next = currN;
    else
        first = currN;

    // Swap next pointers
    node* temp = currN->next;
    currN->next = currM->next;
    currM->next = temp;
}



int main()
{
	init();
	createfirst(10);
	addnode(20),
	addnode(30),
	addnode(50),
	addnode(60);
    // Add_after(50,70);
    swapNodes( 4,2);
    disp();
}

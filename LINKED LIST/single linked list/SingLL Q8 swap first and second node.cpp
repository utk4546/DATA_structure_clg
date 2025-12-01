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
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=NULL;
}
void swap_first_sec(){
    temp=first;
    ttemp=temp->next;
    p=ttemp->next;
    ttemp->next=temp;
    temp->next=p;
    first=ttemp;
    
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
int main()
{
	init();
	createfirst(10);
	addnode(20);
	addnode(30);
    addnode(40);
	addnode(50);
	addnode(60);
    swap_first_sec();
    // swap_seclast_last();
	disp();

}


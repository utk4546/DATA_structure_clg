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
	addnode(50);
	addnode(60);
	disp();

}

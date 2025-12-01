// #include<bits/stdc++.h>
// using namespace std;

// struct node
// {
//   int data;
//     node *next;
// };
// struct node *first=NULL,*temp=NULL,*ttemp=NULL;
// void add_node(int x, struct node* &first){
//   if(first==NULL)
//   {
//     first=new node();
//     first->data=x;
//     first->next=NULL;
//   }  
//   temp=first;
//   while(temp->next!=NULL)
//      temp=temp->next;
//   ttemp=new node();
//   ttemp->data=x;
//   ttemp->next=NULL;
//   temp->next=ttemp;
// }
// void swap_L_SL(struct node* &first){
//     temp = first;
//     while(temp->next!= NULL){
//         ttemp=temp;
//         temp = temp->next;
//     }
//     struct node *p=first;
//     while(p->next!=ttemp)
//        p=p->next;
//     temp->next=p->next;
//     p->next= ttemp->next;
//     ttemp->next=NULL; 
            
// }


// void display(struct node* &first)
// {
//  temp=first;
//  while(temp!=NULL)
//  {
//    cout<<temp->data<<" ";
//    temp=temp->next;
//  }
//  cout<<endl;
// }
// int main()
// {
//     add_node(6,first);
//     add_node(7,first);
//     add_node(8,first);
//     add_node(9,first);
//     add_node(10,first);
//     add_node(11,first);
//     add_node(12,first);
//     cout<<"Linked List:";
//     display(first);
//     swap_L_SL(first);
//     cout<<"Linked List after Swapping:";
//     display(first);
//     return 0;  
// }
 #include<iostream>
using namespace std;

struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p;

void init(struct node* &first)
{
 first=temp=ttemp=NULL;
}
void addnode(int val ,struct node* &first)
{
  temp=first;
  while(temp->next!=NULL)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  temp->next=ttemp;
  ttemp->next=NULL;
}
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=NULL;
}
void swap_seclast_last(struct node* &first){
    temp=first;
    while(temp->next->next!=NULL){
        temp=temp->next;    
} 
p->next=ttemp->next;
ttemp->next=p;
temp->next=NULL;

temp->next=NULL;
p->next=ttemp;
temp->next=p;
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
	init(first);
	createfirst(10);
	addnode(20,first);
	addnode(30,first);
    addnode(40,first);
	addnode(50,first);
	addnode(60,first);
 swap_seclast_last(first);
	disp();

}


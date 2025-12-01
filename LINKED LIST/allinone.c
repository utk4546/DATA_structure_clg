struct node
{
    int data;
    struct node*next;
};
struct node *start=0;
struct node *cn()
{
    struct node *k1;
    k1=(struct node *)malloc(sizeof(struct node));
printf("Enter a data:");
scanf("%d",&k1->data);
k1->next=k1;
return k1;
}
void is()
{
    struct node *h1,*t1;
h1=cn();
if(start==0)
{
    start=h1;
}
else
{
 t1=start;
 while(t1->next!=start)
 {
     t1=t1->next;
 }
 h1->next=start;
 start=h1;
 t1->next=h1;
}
}
void ie()
{
    struct node *b1,*k1;
b1=cn();
if(start==0)
{
    start=b1;
}
else
{
    k1=start;
    while(k1->next!=start)
        k1=k1->next;
    k1->next=b1;
    b1->next=start;
}
}
im()
{

}
void ds()
{
    struct node *g1;
if(start==0)
{

    printf("There is no any node to delete");
}
else
{
  g1=start;
  while(g1->next!=start)
  {
      g1=g1->next;
  }
    g1->next=start->next;
    g1=start;
    start=start->next;
    g1->next=0;
    free(g1);
}
}
void de()
{
    struct node *a1,*p1;
if(start==0)
{
    printf("There is no any node to delete");
}
else
{
    a1=start;
    while(a1->next->next!=start)
    {
        a1=a1->next;
    }
    p1=a1->next;
    a1->next=start;
    p1->next=0;
    free(p1);
}
}
dm()
{

}
void display()
{
    struct node *g1;
if(start==0)
{
    printf("There is no any node to display.");
}
else
{
 g1=start;
  while(g1->next!=start)
  {
     printf("%d ",g1->data);
     g1=g1->next;
  }
printf("%d",g1->data);
}
}

void main()
{
int ch;
printf("\n1. Insert from start");
printf("\n2. Insert from end");
printf("\n3. Insert from middle");
printf("\n4. Delete from start");
printf("\n5. Delete from end");
printf("\n6. Delete from middle");
printf("\n7. Display");
printf("\n8. Exit");
while(1)
{
    printf("\nEnter Your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            is();
            break;
        }
    case 2:
        {
            ie();
            break;
        }
    case 3:
        {
            im();
            break;
        }
    case 4:
        {
            ds();
            break;
        }
    case 5:
        {
            de();
            break;
        }
    case 6:
        {
            dm();
            break;
        }
    case 7:
        {
            display();
            break;
        }
    case 8:
        {
            exit(0);
        }
    default:
        {
            printf("Wrong Input");
        }
    }
}

    getch();
}
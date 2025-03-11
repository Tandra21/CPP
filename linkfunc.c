#include<stdio.h>
#include<malloc.h>
struct link{
    int data;
    struct link*next;
};
typedef struct link node;
node *h=0,*p=0,*q=0;
void create(int n)
{
    node *p=0,*q=0;
    for(int i=0; i<n; i++)
    {
        p=(node*)malloc(sizeof(node));
        printf("Enter data:\n");
        scanf("%d",&p->data);
        if(h==0)
        {
            h=p;
        }
        else
        {
            q->next=p;
        }
        q=p;
    }
}
void display()
{
    node *p=h;
    printf("\nLinked List:");
    while(p!=0)
    {
        printf("\n%d    %d    %d",p,p->data,p->next);
        p=p->next;
    }
    printf("\n");
}
void inhead(int y)
{
    p=(node*)malloc(sizeof(node));
    p->data=y;
    p->next=h;
    h=p;
    printf("Successfully inserted.");
}
void inlast(int z)
{
    p=(node*)malloc(sizeof(node));
    p->data=z;
    q->next=p;
    p->next=0;
    printf("Sucessfully Inserted.");
}
void inany()
{
    int a;
    printf("\nInsert After which data: ");
    scanf("%d",a);
    q=h;
    while(1)
    {
        if(q->data==a) break;
        q=q->next;
    }
    printf("\nEnter your data: ");
    p=(node*)malloc(sizeof(node));
    scanf("%d",&p->data);
    p->next=q->next;
    q->next=p;
    printf("\nSuccesfully Inserted.");
}
void del()
{
    int b;
    printf("\nEnter which data to delete: ");
    scanf("%d",&b);
    p=h;
    while(1)
    {
        if(p->data==b) break;
        q=p;
        p=p->next;
    }
    if(p==h) h=h->next;
    else q->next=p->next;
    printf("Succesfully deleted.");
}
int main()
{
    int n,y,z;
    printf("Size of the linked list: ");
    scanf("%d",&n);
    create(n);
    display();
    printf("Enter data as head node: ");
    scanf("%d",&y);
    inhead(y);
    display();
    printf("\nEnter data as last node: ");
    scanf("%d",&z);
    inlast(z);
    display();
    inany();
    display();
    del();
}


#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link*next;
};
typedef struct link node;
node *h=0,*p=0,*q=0;
int main()
{
    int i,n;
    printf("Size of linked list: ");
    scanf("%d",&n);
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
    q->next=0;
    p=h;
    for(;;)
    {
        if(p==0) break;
        printf("\n%d     %d     %d",p,p->data,p->next);
        p=p->next;
    }
    int y;
    printf("\nEnter Your data as a head node: ");
    scanf("%d",&y);
    p=(node*)malloc(sizeof(node));
    p->data=y;
    p->next=h;
    h=p;
    printf("Successfully inserted");
    p=h;
    for(;;)
    {
        if(p==0) break;
        printf("\n%d     %d     %d",p,p->data,p->next);
        p=p->next;
    }
    int z;
    printf("\nEnter Your data as a laste node: ");
    scanf("%d",&z);
    p=(node*)malloc(sizeof(node));
    p->data=z;
    q->next=p;
    p->next=0;
    printf("Successfully inserted");
    p=h;
    for(;;)
    {
        if(p==0) break;
        printf("\n%d     %d     %d",p,p->data,p->next);
        p=p->next;
    }
    int c,d;
    printf("\nInsert after which data: ");
    scanf("%d",&c);
    q=h;
    while(1)
    {
        if(q->data==c) break;
        q=q->next;
    }
    printf("\nEnter your data: ");
    p=(node*)malloc(sizeof(node));
    scanf("%d",&p->data);
    p->next=q->next;
    q->next=p;
    printf("\nSuccessfully inserted");
    p=h;
    for(;;)
    {
        if(p==0) break;
        printf("\n%d     %d     %d",p,p->data,p->next);
        p=p->next;
    }
    int a;
    printf("\nEnter which data to delete: ");
    scanf("%d",&a);
    p=h;
    while(1)
    {
        if(p->data==a) break;
        q=p;
        p=p->next;

    }
    if(p==h)
        h=h->next;
    else
        q->next=p->next;
    p=h;
    for(;;)
    {
        if(p==0) break;
        printf("\n%d     %d     %d",p,p->data,p->next);
        p=p->next;
    }
}

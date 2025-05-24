#include<iostream>
using namespace std;
struct node{
node* previous;
int data;
node* next;

};
node* head=NULL;
void inserts(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        temp->previous=NULL;
        head=temp;
    }
    else
    {
        node* temp1=head;
        while(temp1->next!=NULL)
            temp1=temp1->next;
            temp1->next=temp;
        temp->previous=temp1;
    }
}
void display()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    inserts(5);
    inserts(6);
    display();
    return 0;
}

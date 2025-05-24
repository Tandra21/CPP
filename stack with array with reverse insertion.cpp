#include<iostream>
using namespace std;
int lastelement=-1;
int ar[5];
void push()
{
    if(lastelement==4)
    {
        cout<<"the stack is full"<<endl;

    }
    else
    {
        cout<<"enter data"<<endl;
        int data;
        cin>>data;
        for(int i=lastelement;i>=0;i--)
            ar[i+1]=ar[i];
        ar[0]=data;
        lastelement++;

    }
    }
    void pop()
    {
        if(lastelement==-1) cout<<"the stack is not full"<<endl;
        else
        {
            for(int i=0;i<lastelement;i++)
            {
                ar[i]=ar[i+1];
            }
            lastelement--;
        }
    }
    void print()
    {
        if(lastelement==-1) cout<<"the stack is empty"<<endl;
        else
        {
            for(int i=0;i<=lastelement;i++)
            {
                cout<<ar[i]<<" ";

            }
            cout<<endl;
        }
    }
    int main()
    {
        while(1)
        {
            cout<<"1.push"<<endl;
            cout<<"2.pop"<<endl;
            cout<<"3.print"<<endl;
            int choice;
            cin>>choice;
            if(choice==1) push();
            if(choice==2) pop();
            if(choice==3) print();
        }
        return 0;
    }

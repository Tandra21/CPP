#include<iostream>
using namespace std;
int top=-1;
string ar[5];
void push()
{
    if(top==4) cout<<"stack overflow"<<endl;
    else
    {
        top+=1;

        string data;
        cout<<"enter your data : "<<endl;
        cin>>data;
        ar[top]=data;
    }
}
void print()
{
    if(top==-1)
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        cout<<"the stack is : "<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<ar[i]<<endl;
        }

    }
}
int main()
{
    push();
    push();
    push();
    push();
    push();
    print();
    return 0;
}

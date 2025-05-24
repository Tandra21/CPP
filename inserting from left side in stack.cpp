#include<iostream>
using namespace std;
int top=-1;
string arr[5];
void push()
{
    if(top==4) cout<<"stack overflow"<<endl;
    else {
        string data;
        cout<<"enter your data"<<endl;
        cin>>data;
        for(int i=0;i>=0;i--)
        {
            arr[0]=data;
            top++;

        }

    }
}
void print()

{
    if(top==-1) cout<<"the stack is empty"<<endl;
    else
    {
        cout<<"the stack is : "<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<endl;

        }
    }
}
int main()
{
    cout<<"enter how many time you want to insert";
    int a;
    cin>>a;
    while(a--)
    {
        push();
        print();
    }
    return 0;
}

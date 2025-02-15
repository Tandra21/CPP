#include<iostream>
using namespace std;
class number{
    int a,b;
public:
    void input();
    void display();
private:
    void largest();
};
void number::input(){
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
}
void number::largest(){
    if(a>b) cout<<"Largest value:"<<a<<endl;
    else if (a<b) cout<<"Largest value:"<<b<<endl;
    else cout<<"Both are equal.";
}
void number:: display(){
    largest();
}
int main()
{
    int n;
    cin>>n;
    number s[n];
    for(int i=0;i<n;i++)
    {
    s[i].input();
    s[i].display();
    }
    return 0;
}

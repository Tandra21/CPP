#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name,dep;
    float gpa;
    void input()
    {
        cin>>name>>id>>dep>>gpa;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Department: "<<dep<<endl;
    }
    void check()
    {
        if(gpa>=3.5) cout<<"Eligible"<<endl;
        else cout<<"Not Eligible"<<endl;
    }

};
int main()
{
    student s1;
    s1.input();
    s1.display();
    s1.check();
return 0;
}

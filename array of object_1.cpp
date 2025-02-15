#include<iostream>
using namespace std;
class employee
{
public:
    string name;
    int salary;
    int ID;
    void input(){
        cout<<"Enter ID:";
        cin>>ID;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter salary:";
        cin>>salary;
    }
    void display(){
        status();
    }
private:
    void status(){
        if(80000<=salary) cout<<"Rich"<<endl;
        else if(80000> salary && 20000<salary) cout<<"middle class\n";
        else if(20000>=salary) cout<<"lower class\n";
    }
};
int main()
{
    int a;
    cout<<"Employee numbers:";
    cin>>a;
    employee e[a];
    for(int i=0; i<a; i++){
        e[i].input();
        e[i].display();
    }
    return 0;
}

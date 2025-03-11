#include<iostream>
using namespace std;
int binary(int a[],int n,int t)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==t) return mid;
        else if(a[mid]>t)
            r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int b;
    cin>>b;
    int index=binary(a,n,b);
    if(index==-1)
    {
        cout<<"Not found.";
        return 0;
    }
    else
    cout<<"Found at "<<index+1<<" position.";
}

#include<iostream>
using namespace std;
int ls(int a[],int n,int t)
{
    int l=0,r=n-1;
    int last=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==t)
        {
           last=mid;
           l=mid+1;

        }
        else if(a[mid]>t) r=mid-1;
        else l=mid+1;
    }
    return last;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int b;
    cout<<"Enter the element to find its last occurrence: ";
    cin>>b;
    int index=ls(a,n,b);
    if(index==-1)
    {
        cout<<"Not found\n";
    }
    else
    {
        cout<<"Last occurrence at "<<index<<" index";
    }
    return 0;
}

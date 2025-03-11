#include<iostream>
using namespace std;
int fs(int a[],int n, int t)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==t) return mid;
        else if(a[mid]>t) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
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
    cout<<"Enter the array size: ";
    cin>>n;
    int a[n];
    cout<<"enter the array : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int t;
    cout<<"Enter the element to find frequency: ";
    cin>>t;
    int f=fs(a,n,t);
    int l=ls(a,n,t);
    if(f==-1)
        cout<<"Not found.";
    else
        cout<<"The frequency of "<<t<<" is "<<l-f+1;
}

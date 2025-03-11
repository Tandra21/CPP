#include<iostream>
using namespace std;
int fs(int a[],int n,int t)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==t) return mid;
        else if(a[mid]<t) l=mid+1;
        else r=mid-1;
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
    int index=fs(a,n,b);
    if(index==-1){
        cout<<"Not Found.";
        return 0;
    }
    else cout<<"First Occurence at "<<index<<" index\n";
}

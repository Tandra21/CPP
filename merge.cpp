#include<iostream>
using namespace std;
void merge(int a[],int l,int r,int mid)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int j=0;j<n2;j++) R[j]=a[mid+1+j];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,r,mid);
    }
}
int main()
{
    int a[6]={1,4,5,3,6,2};
    mergesort(a,0,5);
    for(int i=0;i<6;i++) cout<<a[i]<<" ";
}

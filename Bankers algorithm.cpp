#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int r=3;
    int allocation[5][3]={{0,1,0},
                        {2,0,0},
                        {3,0,2},
                        {2,1,1},
                        {0,0,2}
    };
    int max[5][3]={{7,5,3},
                   {3,2,2},
                   {9,0,2},
                   {2,2,2},
                   {4,3,3}
    };
    int available[3]={3,3,2};
    int f[5]={0};
    int ans[5];
    int need[5][3];
    int index=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            need[i][j]=max[i][j]-allocation[i][j];
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            if(f[i]==0)
            {
                int flag=0;
                for(int j=0;j<r;j++)
                {
                    if(need[i][j]>available[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    ans[index++]=i;
                    for(int y=0;y<r;y++)
                    {
                        available[y]+=allocation[i][y];
                    }
                    f[i]=1;
                }
            }
        }
    }
    cout<<"The safe sequence is : ";
    for(int i=0;i<n-1;i++)
    {
        cout<<"p"<<ans[i]<<"->";
    }
    cout<<"p"<<ans[n-1]<<endl;
    return 0;
    }

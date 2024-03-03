#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m],i,j;
    long long int k=0;

    for(i=0;i<m;i++)
    {
        cin>>ar[i];
    }

    for(i=0;i<m-1;i++)
    {
        if(ar[i]>ar[i+1])
        {
            k+=n;
        }
    }
    k=k+ar[m-1]-1;
    cout<<k<<endl;
}

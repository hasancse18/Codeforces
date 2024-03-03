#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m],i,s=100000,j=0;
    for(i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    if(m!=n)
    {
            for(i=0;i<=m-n;i++)
        {
           int m=ar[n-1+i]-ar[i];
           //cout<<m<<endl;
           if(m<s)
           {
               s=m;
           }
        }
    }
    else
    {
        s=ar[n-1]-ar[0];
    }
    cout<<s<<endl;
}

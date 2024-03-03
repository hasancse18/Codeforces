#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,m,n,e=0,o=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)
        {
            e++;
        }
        else
            o++;
    }
    //cout<<e<<endl<<o<<endl;
    if(e>o)
    {
       for(i=0;i<n;i++)
       if(ar[i]%2!=0){
        cout<<i+1<<endl;
        break;
       }
    }
    else
    {
        for(i=0;i<n;i++)
        if(ar[i]%2==0){
        cout<<i+1<<endl;
        break;
       }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,k=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    a=b=ar[0];
    for(i=0;i<n;i++)
    {
        if(a<ar[i])
        {
           k++;
           a=ar[i];
        }
        else if(b>ar[i])
        {
            k++;
            b=ar[i];
        }
        else
            continue;
    }
    cout<<k<<endl;
}

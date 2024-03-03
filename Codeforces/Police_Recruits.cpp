#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,po=0,cr=0;
    int x=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
            po+=ar[i];
        }
        else
        {
            if(po>0)
            {
                po--;
            }
            else
                cr++;
        }
    }
    cout<<cr<<endl;
}

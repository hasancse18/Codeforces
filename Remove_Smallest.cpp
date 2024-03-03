#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t){
            t--;

        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
    int s=0;
    if(n==1){
        cout<<"YES"<<endl;
        }
    else
    {
            for(int i=0;i<n-1;i++)
        {
            if(ar[i+1]-ar[i]<=1)
            {
                ar[i]=0;
            }
            s+=ar[i];
        }
        if(s!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

        }
    }
}

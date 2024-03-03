#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        vector<int>v(n,0),v2;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[i]=x;
        }
        v2=v;
        sort(v.begin(),v.end());
        int c=0;
        int m=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v2[i])
            {
                c++;
            }
            else
            {
                m=max(m,c);
                c=0;
            }
        }
        m=max(m,c);
       

        if(m!=0 && k==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
}
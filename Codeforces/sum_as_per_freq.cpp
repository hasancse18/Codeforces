#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int>s(1000000,0),f(1000000,0),x(1000000,0);

    int n;
    cin>>n;
    long long i;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        f[x[i]]++;
        //s[f[x[i]]]+=x[i];
    }
    for(i=0;i<n;i++)
    {
        s[f[x[i]]]+=x[i];
    }
    for(i=2;i<1000000;i++)
    {
        s[i]+=s[i-1];
    }
    long long q;
    cin>>q;
    for(i=0;i<q;i++)
    {
        long long int l,r;
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<'\n';
    }
    
}
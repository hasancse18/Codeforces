#include<bits/stdc++.h>
using namespace std;


int finds()
{
    vector<int>v,v1;
    int n;
    cin>>n;
    int a,b,c,x,j,f=0;

    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        }
        v1=v;
        sort(v.begin(),v.end());

        if(v[0]==v[1])
            a=v[n-1];
        if(v[n-2]==v[n-1])
            a=v[0];
        for(int i=0;i<n;i++)
        {
            if(a==v1[i])
                return i+1;
        }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m=finds();
        cout<<m<<endl;
    }
}

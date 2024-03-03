#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int>v;
        for(int j=0;j<x;j++)
        {

            int y;
            cin>>y;
            v.push_back(y);
        }
        m=v[0];
        for(int a=1;a<x;a++)
        {
             m = m^v[a];

        }
         cout<<m<<endl;
         m=0;
    }
}

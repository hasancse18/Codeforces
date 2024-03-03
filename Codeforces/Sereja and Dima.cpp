#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,d=0,m=1;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        if(m%2==0)
        {
            if(v[l]>v[r])
            {
                d+=v[l];
                l++;
            }
            else
            {
                d+=v[r];
                r--;
            }
        }
        else
        {
            if(v[l]>v[r])
            {
                s+=v[l];
                l++;
            }
            else
            {
                s+=v[r];
                r--;
            }
        }
        m++;
    }
    cout<<s<<" "<<d<<endl;
}

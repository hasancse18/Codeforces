#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n],w[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        cin>>h[i]>>w[i];
    }
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        {
            if(h[i]==w[j])
            {
                c++;
            }
        }

    cout<<c<<endl;
}

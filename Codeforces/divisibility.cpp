#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin>>n;

    for(j=0;j<n;j++)
    {
        int k=0,i;
        long long int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            k=0;
            cout<<k<<endl;
        }
        else if(a>b)
        {
            int x;
            x=a%b;
            cout<<b-x<<endl;
        }
        else if(a<b)
        {
            cout<<b-a<<endl;
        }
    }
}

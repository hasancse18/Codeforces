#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,s=0,i=0;
    cin>>x>>y;
    n=240-y;
    //n=n/5;
    n=2*n;
    for(i=1;i<=x;i++)
    {
        if(n>=(5*i*i)+(5*i)){
                s=i;
            }
    }
    //s=s-5;
    cout<<s<<endl;
}

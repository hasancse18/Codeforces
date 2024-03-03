#include<bits/stdc++.h>
using namespace std;




int call()
{
    int n,a,q;
    cin>>n>>a>>q;
    int p=0,m=0,c=0;
    int need=n-a;
    string s;
    cin>>s;
    if(n==a)
        return 1;
    for(auto it:s)
    {
        if(it=='-'){
                c=0;
            m--;}
        else{
            p++;
            a++;
            c++;
            }
    if(c+a==n)
        return 1;
    }
    if(p+m>n)
        return 1;
    else if(a>=n)
        return 2;
    else
        return 3;
}
int main()
{

    int t;
    cin>>t;
    int x;
    while(t--)
    {
         x=call();
         if(x==1)
        cout<<"YES"<<endl;
    if(x==2)
        cout<<"MAYBE"<<endl;
    if(x==3)
        cout<<"NO"<<endl;
    }

}

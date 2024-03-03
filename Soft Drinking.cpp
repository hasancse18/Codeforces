#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=(k*l)/nl;
    x=x/n;
    int y=(c*d)/n;
    int z=(p/np)/n;

    int r=min(x,y);
    r=min(r,z);
    cout<<r<<endl;
}

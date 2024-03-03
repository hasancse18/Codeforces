#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;
    int x=min(r,b);

    int y =max(r,b);

    int c=(y-x)/2;
    cout<<x<<" "<<c<<endl;
}

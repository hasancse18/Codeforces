#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int c=(v[1]-v[0]+v[2])/2;
    int b=v[1]-c;
    int a=v[3]-b-c;
    cout<<a<<" "<<b<<" "<<c<<endl;
}

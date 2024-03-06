#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string str,s;
        cin>>str;
        s=str;
        int f=0;
        reverse(s.begin(),s.end());
        if(str<=s)
        {
            cout<<str<<endl;
        }
        else
        {
            cout<<s+str<<endl;
        }

    }
}
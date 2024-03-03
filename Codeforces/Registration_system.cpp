#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    string s;
    map<string,int>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(m[s]==0){
            cout<<"OK"<<endl;
            m[s]=1;
            }
        else{

            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
}

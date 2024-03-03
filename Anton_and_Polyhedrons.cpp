#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,i,s=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>str;
        if(str=="Tetrahedron")
           s+=4;
        if(str=="Cube")
           s+=6;
        if(str=="Octahedron")
           s+=8;
        if(str=="Dodecahedron")
           s+=12;
        if(str=="Icosahedron")
           s+=20;

    }
    cout<<s<<endl;
}

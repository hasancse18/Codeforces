#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ar[2];
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    sort(ar,ar+3);

    cout<<ar[2]-ar[0]<<endl;
}

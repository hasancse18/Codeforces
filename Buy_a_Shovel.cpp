#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,i=1,n,k,r;
    cin>>k>>r;
    while(1)
    {
        int x= (k*i);
        int y=x%10;
       if(y==0 || y==r)
            break;
       i++;
    }
    cout<<i<<endl;
}

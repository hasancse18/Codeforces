#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    int ar[1000],j=0,x,i,m=0;
    getline(cin,str);
   int n=str.length();
   if(n>2)
   {
    for(i=1;i<n;i+=3)
       {
           ar[j]=str[i];
           j++;
       }
       x=j;
       sort(ar,ar+x);
       for(i=0;i<x;i++)
        if(ar[i]!=ar[i+1])
       {
           m++;
       }
       cout<<m<<endl;

   }
   else{
    cout<<"0"<<endl;
   }
}

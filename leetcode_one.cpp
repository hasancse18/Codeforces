#include<bits/stdc++.h>
using namespace std;
int main()
{
        int f=0;
        stack<char>str;
        string s;
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            {
                str.push(s[i]);
            }
            else
            {
                //cout<<"f"<<endl;
                //cout<<str.top();
                //char x=str.pop();
                if(str.empty()){
                    f=0;
                    break;
                }
                if(s[i]==')')
                {
                    char x= str.top();
                    //cout<<x;
                    str.pop();
                    if(x =='(')
                        f=1;
                    else{
                        //cout<<"f"<<endl;
                        f=0;
                        break;
                        }
                }
                if(s[i]=='}')
                {
                    char x= str.top();
                    str.pop();
                    if(x=='{')
                        f=1;
                    else{
                        f=0;
                        break;
                        }
                }
                if(s[i]==']')
                {
                    char x= str.top();
                    str.pop();
                    if(x=='[')
                        f=1;

                    else{
                        f=0;

                        break;
                        }
                }
            }
        }
        if(f==0 || !str.empty()){
         cout<<"false"<<endl;}

        else if(f==1 && str.empty()){
          cout<<"true"<<endl;;}
}

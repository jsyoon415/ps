#include <iostream>
#include <algorithm>
using namespace std;

int n,i,j,a=0,b,w,x,y,rc,bc,mn;
int M(int v, char k)
{
    int result;
    if(k=='R')
    {
        result=min(b,a-v);
    } else {
        result=min(a,b-v);
    }
    return result;
}
int main()
{
    string str;
    cin>>n>>str; //n=67
    for(i=0;i<n;i++)
    {
        if(str[i]=='R')
        {
            a++;
        }
    }
    b=n-a;
    
    rc=1;
    bc=1;
    if(a==0||b==0)
    {
        cout<<0;
        return 0;
    }
    for(i=1;i<n;i++)
 
    {
        if(str[0]=='R')
        {
           if(str[i]=='R')
           {
                rc++;
           } else {
                rc=M(rc,'R');
                bc=b;
                break;
           } 
        }
        else if(str[i]=='B') {
            bc++;
        }
        else {
             bc=M(bc, 'B');
             rc=a;
             break;
        }
    }
 
    w=min(rc,bc);
    rc=1;
    bc=1;
    for(i=n-2;i>=0;i--)
    {
        if(str[n-1]=='R')
        {
           if(str[i]=='R')
           {
                rc++;
           } else {
                bc=b;
                rc=M(rc,'R');
                break;
           } 
        }
        else if(str[i]=='B') {
            bc++;
        }
        else {
             bc=M(bc, 'B');
             rc=a;
             
             break;
        }
    }
    mn = min(w,min(rc,bc));
 
    cout<<mn;
}

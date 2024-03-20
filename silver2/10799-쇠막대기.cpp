#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i,sum=0,cnt=0,m=0,len;
    string str;
    cin>>str;
    len=str.length();
    for(i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
            if(str[i+1]==')')
            {
                sum+=cnt;
                i++;
            } else {
                cnt++;
                m++;
            }
        } else {
            cnt--;
        }
    }
    sum+=m;
    cout<<sum;
}

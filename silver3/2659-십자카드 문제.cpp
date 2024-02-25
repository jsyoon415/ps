#include <iostream>
using namespace std;

int M(int v)
{
    int result = v%10*1000+v/10;
    return result;
}
int main()
{
    int arr[4]={0},i,j,x,swap,cnt=1,a,mn=10000,b,brr[9999]={0};
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    x=arr[0]*1000+arr[1]*100+arr[2]*10+arr[3];
    for(i=0;i<4;i++)
    {
        if(x<mn)  
        {
            mn=x;
        }
        x=M(x);
    }
    for(i=1111;i<=mn;i++)
    {
        if(i%10!=0&&(i/10)%10!=0&&(i/10)/10%10!=0)
        {
            a=i;
            b=10000;
            for(j=1;j<=4;j++)
            {
                if(a<b)
                {
                    b=a;
                }
                a=M(a);
            }
            if(b<mn&&brr[b]==0)
            {
                cnt++;
                brr[b]=1;
            }
        }
    }
    
    cout<<cnt;
    return 0;
}

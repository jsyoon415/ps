#include <iostream>
using namespace std;

int main()
{
    int t,n,i,arr[5]={0},j,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<5;j++)
        {
            arr[j]=0;
        }
        x=n;
        if(x>60)
        {
            arr[0]+=x/60;
            x=x%60;
        }
        if(x>35)
        {
            arr[0]++;
            x=60-x;
            if(x%10>5)
            {
                arr[2]+=x/10+1;
                arr[3]+=10-(x%10);
            } else {
                arr[2]+=x/10;
                arr[4]+=x%10;
            }
            
        } else {
            if(x%10>5)
            {
                arr[1]+=x/10+1;
                arr[4]+=10-(x%10);
            } else {
                arr[1]+=x/10;
                arr[3]+=x%10;
            }
        }
        for(j=0;j<5;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }
}

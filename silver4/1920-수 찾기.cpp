#include <bits/stdc++.h>
using namespace std;
long long n,arr[100001]={0},s,num[100001]={0},i,t,start,e,mid,sw;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // 이진 탐색 (Binary Search) 활용
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cin>>s;
    for(i=0;i<s;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<s;i++)
    {
        t=num[i];
        start=0;
        e=n-1;
        sw=0;
        while(start<=e)
        {
            mid=(start+e)/2;
            if(arr[mid]==t)
            {
                sw=1;
                break;
            } else if(arr[mid]>t)
            {
                e=mid-1;
            } else start=mid+1;
        }
        cout<<sw<<"\n";
    }
}

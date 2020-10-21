#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[k],arr[n+1]={0};
        for(int i=0;i<k;i++)
            cin>>ar[i];
        for(int i=0;i<k;i++)
            arr[ar[i]]++;
        for(int i=1;i<=n;i++)
            arr[i]+=arr[i-1];
        for(int i=1;i<=n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
	}
	return 0;
}
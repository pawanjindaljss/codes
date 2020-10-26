#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    long long int s=0,ans=0;
	    for(int i=1;i<k;i++)
    	    s+=a[i]-a[i-1];
    	ans=s;
    	for(int i=k;i<n;i++)
    	{
    	    s-=(a[i-k+1]-a[i-k]);
    	    s+=(a[i]-a[i-1]);
    	    ans=min(s,ans);
    	}
    	cout<<ans<<endl;
	}
	return 0;
}
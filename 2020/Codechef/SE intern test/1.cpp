#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],m=INT_MAX;
	    long long int ss=0,sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	            sum+=a[i];
	        else
	            ss+=a[i];
	    }
	    cout<<max(sum,ss)<<endl;
	}
	return 0;
}


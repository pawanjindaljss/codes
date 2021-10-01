#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,tt=1;
	cin>>t;
	while(t--)
	{
	    cout<<"Case #"<<tt++<<":"<<endl;
	    int n;
    	cin>>n;
    	string x;
    	cin>>x;
    	char arr[n][n];
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			if(i==j)
    				arr[i][j]='Y';
    			if(i<j)
    			{
    				int z=1;
    				for(int k=i;k<j;k++)
    				{
    					if(y[k]=='N' || x[k+1]=='N')
    					{
    						z=0;
    						break;
    					}
    				}
    				if(z)
        				arr[i][j]= 'Y';
    				else
    					arr[i][j]= 'N';
    			}
    			else
    			{
    			    int z=1;
    				for(int k=i;k>j;k--)
    				{
    					if(y[k]=='N' || x[k-1]=='N')
    					{
    						z=0;
    						break;
    					}
    				}
    				if(z)
        				arr[i][j]= 'Y';
    				else
    					arr[i][j]= 'N';
    			}
    		}
    	}
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    			cout<<arr[i][j];
    		cout<<endl;
    	}
	}
	return 0;	
}
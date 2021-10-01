#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
unordered_set<int> se;

int call(int n,int q)
{
    if(se.find(q)!=se.end())
        return 0;
    int m=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[q][i]==1)
        {
            m=min(m,call(n,v[q][i])+1);
        }
    }
    if(m!=INT_MAX)
        return m;
    else
        return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a[m][2];
	    for(int i=0;i<n;i++)
	    {
	        vector<int> vv(n,0);
	        v.push_back(vv);
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i][0]>>a[i][1];
	        v[a[i][0]-1][a[i][1]-1]=1;
	        v[a[i][1]-1][a[i][0]-1]=1;
	    }
	    int tmp;
	    for(int i=0;i<k;i++)
	    {
	        cin>>tmp;
	        se.insert(tmp-1);
	    }
	    int q;
	    cin>>q;
	    for(int i=0;i<q;i++)
	    {
	        int qq;
	        cin>>qq;
            int ans=call(n,qq-1);
	            cout<<ans<<endl;
	    }
	}
	return 0;
}


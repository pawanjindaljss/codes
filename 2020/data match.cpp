#include <bits/stdc++.h>
using namespace std;
string func(string s)
{
    string sub = "        |";
    string sub2= "\n";
    string sub3= "  ";
    int i=10;
    s = regex_replace(s,regex(sub), "");
    s= regex_replace(s,regex(sub2), " ");
    while(i--)
    	s=regex_replace(s,regex(sub3), " ");
    return s ;
}
 
int main() {
	map<string, vector<double>> mp,mpp;
	map<string, vector<double>> ::iterator it, itt;
	string s;
	double x;
 
	for(int i=0;i<13;i++)
	{
		vector<double> a;
		getline(cin,s);
		cout<<s<<endl;
		for(int j=0;j<11;j++)
		{
			cin>>x;
			a.push_back(x);
			cout<<x<<" ";
		}
		mp[s]= a;
		cout<<endl;
	}
 
 
	for(int i=0;i<13;i++)
	{
		vector<double> a;
		getline(cin,s);
		for(int j=0;j<11;j++)
		{
			cin>>x;
			a.push_back(x);
		}
		mpp[s]= a;
	}
	for(it= mp.begin(); it!= mp.end();it++)
	{
	    cout<<it->first<<endl;
	    int n= it->second.size();
	    for(int i=0;i<n;i++)
				cout<<it->second[i]<<" ";
	}
	for(it= mp.begin(); it!= mp.end();it++)
	{
		// cout<<"x";
		// cout<<it->first;
		string ss=it->first;
		int n= it->second.size();
 
		itt= mpp.find(ss);
		if(itt != mpp.end())
		{
			for(int i=0;i<n;i++)
				if(it->second[i]!= itt->second[i])	
					cout<<ss<<" "<<it->second[i]<<endl;
		}
		cout<<endl;
	}
	return 0;
}

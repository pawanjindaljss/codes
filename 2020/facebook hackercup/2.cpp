#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream myfile;
	ofstream output;  
	output.open("22.txt");
    myfile.open("222.txt");
    int num, tt=1;
    myfile >> num;
	while(num--)
	{
		string s="Case #";
		//str(tt++)+": ";
		ostringstream str1; 
    	str1 << tt++; 
		s+= str1.str()+ ": ";
		//cout<<"Case #"<<tt++<<": ";
		int n,a=0,b=0;
		myfile >>n;
		string x;
		myfile >> x;
		for(int i=0;i<n;i++)
    	{
    	    if(x[i]=='A')
    	        a++;
    	    else if(x[i]=='B')
    	        b++;
    	}
    	if(abs(a-b)==1)
    	    s+="Y\n";
    	else
    	    s+="N\n";
    	output<<s;
	}
	output.close();
	myfile.close();
	/*
	int t,tt=1;
	cin>>t;
	while(t--)
	{
	    cout<<"Case #"<<tt++<<":"<<endl;
	    int n;
    	cin>>n;
    	char x;
    	int a=0,b=0;
    	string x;
    	cin>>x;
    	vector<char> v;
    	vector<char>::iterator it1,it2,it;
    	//cout<<x<<" ";
    	for(int i=0;i<n;i++)
    		v.push_back(x[i]);
    	for(int i=0;i<n;i++)
    		cout<<v[i]<<" ";
    	int f=1;
    	while(v.size()>1)
    	{
    		char a;
    		if(v[0]==v[1]&& v[1]==v[2])
    		{
    		    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" ";
    			f=0;
    			break;	
    		}
    		else
    		{
        		if((v[0]==v[1]) || (v[0]==v[2]))
            		a=v[0];
        		else
        		    a=v[1];
                it = v.begin(); 
                v.erase(it);
                it = v.begin(); 
                v.erase(it);
                it = v.begin(); 
                v.erase(it);
        		auto it = v.insert(v.begin(),a);
    		}
    	for(int i=0;i<n;i++)
    	{
    	    cin>>x;
    	    if(x=='A')
    	        a++;
    	    else if(x=='B')
    	        b++;
    	}
    	if(abs(a-b)==1)
    	    cout<<'Y'<<endl;
    	else
    	    cout<<'N'<<endl;
    }
    */
    return 0;
}
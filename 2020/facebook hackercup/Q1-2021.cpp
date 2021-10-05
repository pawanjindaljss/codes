#include <bits/stdc++.h>
using namespace std;
#define fastmode ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define ll long long int
bool isfirst(char a)
{
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        return true;
    return false;
}
int main()
{
    fastmode;
	fstream file;
    ofstream output;
	string ipfilename, opfilename;
	ipfilename = "/home/pawanjindal/Downloads/1/consistency_chapter_1_input.txt";
    opfilename = "/home/pawanjindal/Downloads/1/output1.txt";
	file.open(ipfilename);
	output.open(opfilename);
    int t;
    file >> t;
	for(int run=1;run<=t;run++)
	{
		string ipstr;
        file >> ipstr;
        ll n= ipstr.length(), cnt1=0,cnt2=0;
        unordered_map<char,ll>hashing;
        int max1=0, max2=0;
        for(int i=0;i<n;i++)
        {
            hashing[ipstr[i]]++;
            if(isfirst(ipstr[i]))
            {
                cnt1++;
                if(max1<hashing[ipstr[i]])
                    max1= hashing[ipstr[i]];
            }
            else
            {
                cnt2++;
                if(max2<hashing[ipstr[i]])
                    max2= hashing[ipstr[i]];
            }
        }
        ll res1= (cnt1-max1)*2 + (n-cnt1);
        ll res2= (cnt2-max2)*2 + (n-cnt2);
        ll ans= min(res1, res2);
        output<<"Case #"<<run<<": "<<ans<<endl;
	}
    file.close();
    output.close();
	return 0;
}

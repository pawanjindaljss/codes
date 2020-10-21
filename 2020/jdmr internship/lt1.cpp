#include <bits/stdc++.h>
using namespace std;
string decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  	string s;
    int x=0;
    while (n > 0) { 
  
        ostringstream str1; 
    	str1 << n%2; 
    	s+= str1.str();
        n = n / 2; 
        x++; 
    } 
  	char z;
    // printing binary array in reverse order 
    for (int i=0,j=x - 1; i<j;i++, j--) 
      {
      	z= s[i];
      	s[i]=s[j];
      	s[j]=z;
      }
    return s;
} 
int main()
{
	int t,tt=1;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    	cin>>a[i];
	    
	    for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	{
	    		if(i==j)
	    			cintinue;
	    		string x=decToBinary(a[i]);
	    		string y= decToBinary(a[j]);
	    		string yx= x+y;
	    		string xy= y+x;
	    	}
	    }

    }
    return 0;
}
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
         // Your logic here
          int h = floor(log2(n))  + 1;
       int g = 1;
       int ans = 0;
       for(int i=0;i<h;i++){
           int d = 2*g;
           int gg = (n+1)/d;
           ans += gg*g;
           int rem = (n+1)%d;
           if(rem>g)
           ans += rem%g;
           g= g<<1;
       }
       return ans;
   }
    
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends

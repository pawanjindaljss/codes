#include <bits/stdc++.h>
using namespace std;
//check if number is palindrome or not
int isPalindrome(int n) 
{ 
    // Find reverse of n 
    int rev = 0; 
    for (int i = n; i > 0; i /= 10) 
        rev = rev*10 + i%10; 
  
    // If n and rev are same, then n is palindrome 
    return (n==rev);
} 
 

//Main function
int main()
{
    long long int x=0;
    int n,m;
    cin>>n>>m;
    int zz=0;
    int cnt=0;
    for(int i=n;i<=m;i++)
    {
        for(int j=0;j<24;j++)
        {
            for(int k=0;k<60;k++)
            {
                for(int l=0;l<60;l++)
                {
                    x=i*(pow(10,6));
                    x+=j*(pow(10,4));
                    x+=k*(pow(10,2));
                    x+=l;
                    if(isPalindrome(x))
                        cnt++;
                }
            }
        }
    }
    cout<<cnt;
}
/*     ******************* PPPPPPPPPPPPPPP                      JJJJJJJJJJJJJJJJJJJJJJJ
     ******************* PPPPPPPPPPPPPPP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PP           PP                                    JJ
     ******************* PPPPPPPPPPPPPPP                                    JJ
     ******************* PPPPPPPPPPPPPPP                                    JJ
     ******************* PP                                                 JJ
     ******************* PP                                                 JJ
     ******************* PP                                                 JJ
     ******************* PP                                    JJ           JJ
     ******************* PP                                     JJ          JJ
     ******************* PP                     .....            JJ         JJ
     ******************* PP                     .....             JJ        JJ
     ******************* PP                     .....              JJJJJJJJJJJ
*/
#include <bits/stdc++.h>
using namespace std;
/*
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define begin_end(a) a.begin(),a.end()
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
*/
//int Binser(int Start,int S){
//// if(S<0) return -1;
//   int Le=Start+1,Ri=N,Mid,Save=0;
//   while(Le<=Ri){
//        Mid=(Le+Ri)/2;
//        if(S>=Pref[Mid]-Pref[Start]){
//             Save=Mid;
//             Le=Mid+1;
//        } else Ri=Mid-1;
//   }
//   return Save;
//}
#define forl(i,a,n) for(int i=a;i<n;i++)
#define rfor(i,n,a) for(int i=n;i>=a;i--)
#define fore(i,a,n) for(int i=a;i<=n;i++)
int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

void xyzz()
{
    int array[10];
    for(int i=0;i<10;i++)
    {
        //cout<<array[i];
        array[i]=addition(i,i+1);
    }
}

void swap(int*, int*) ;

void bubbleSort(int*, int);

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int mod=pow(10,9)+7;
    int s,e,k;
    cin>>s>>e>>k;
    long long int xx=((pow(e-s+1,k))/2);
    cout<<xx%mod;
    int x=s,y=e;
    swap(x,y);
}

   
void swap(int *p1, int *p2) 
{ 
    int temp = *p1; 
    *p1 = *p2; 
    *p2 = temp; 
    //cout<<temp;
} 

void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  

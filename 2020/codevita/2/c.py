'''
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
'''
s,e=map(int,input().split())
k=int(input())
n=e-s+1
x=((n**k)/2)
xx=((n**k)//2)
if x==xx:
    print(xx%1000000007)
else:
    print((xx+1)%1000000007)

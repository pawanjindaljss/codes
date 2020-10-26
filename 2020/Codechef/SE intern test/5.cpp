#include <bits/stdc++.h>
using namespace std;
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

class graph
{
    int v;
    list<int> *adj;
    public:
    graph(int v)
    {
        this->v=v;
        adj=new list<int>[v];
    }
    void apndedge(int v, int w)
    {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }
    pair<int, int> bfs(int u)
    {
        int dstnc[v];
        memset(dstnc, -1, sizeof(dstnc));
        queue<int> q;
        dstnc[u] = 0;
        q.push(u);
        while (q.empty()==false)
        {
            int t = q.front();       
            q.pop();
            for (auto it = adj[t].begin(); it != adj[t].end(); it++)
            {
                int v = *it;
                if (dstnc[v] == -1)
                {
                    q.push(v);
                    dstnc[v] = dstnc[t] + 1;
                }
            }
        }
        int mxds = 0;
        int ndid;
        for (int i = 0; i < v; i++)
        {
            if (dstnc[i] > mxds)
            {
                mxds = dstnc[i];
                ndid = i;
            }
        }
        return make_pair(ndid, mxds);    
    }
    void lp()
    {
        pair<int, int> t1, t2;
        t1 = bfs(0);
        t2 = bfs(t1.first);
        int ans= (t2.second+1)/2;
        cout << ans<< endl;
    }
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        nt zzzz=100;
        int arr[zzzz]={0};
        for(int i=0;i<zzzz;i++)
            arr[i]=i+1;
        bubbleSort(arr,zzzz);
        map<int,int> m,mp;
        for(int i=0;i<zzzz;i++)
            mp[arr[i]]++;
        int counting=0;
        graph g(n);
        int a[n],aa[n];
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i]>>aa[i];
            a[i]--;
            aa[i]--; 
            //cout<<a[i]<<" ";
            //cout<<aa[i]<<" ";
            g.apndedge(a[i],aa[i]);
        }

        g.lp();
    }
    return 0;
}
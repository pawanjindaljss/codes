#include <bits/stdc++.h>
using namespace std;
#define fastmode ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define ll long long int
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define begin_end(a) a.begin(),a.end()
// int Binser(int Start,int S){
// //   if(S<0) return -1;
//  int Le=Start+1,Ri=S,Mid,Save=0;
//  while(Le<=Ri){
//      Mid=(Le+Ri)/2;
//      if(S>=Pref[Mid]-Pref[Start]){
//          Save=Mid;
//          Le=Mid+1;
//      } else Ri=Mid-1;
//  }
//  return Save;
// }
bool isfirst(char a);
void selectionSort(int arr[], int n); 


int main() {
    fastmode;
    fstream file;
    ofstream output;
    string ipfilename, opfilename;
    ipfilename = "/home/pawanjindal/Downloads/3/xs_and_os_input.txt";
    opfilename = "/home/pawanjindal/Downloads/3/output3.txt";
    file.open(ipfilename);
    output.open(opfilename);
    int t;
    file >> t;
    for(int run=1;run<=t;run++)
    {
        int n;
        file>>n;
        int arr[n];
        string array[n];
        for(int i=0;i<n;i++)
        {
            file>>array[i];
            arr[i]= i;
        }
        int cnt=0, crose=0, tmp=0, check=0, res=INT_MAX;
        unordered_map<int,int>hash;
        vector<char> v;
        unordered_map<int,bool> un;
        for(int i=0;i<n;i++)
        {
            selectionSort(arr,n);
            tmp=0;
            check=0;
            for(int j=0;j<n;j++)
            {
                un[i]= isfirst(array[i][j]);
                if(array[i][j]=='O')
                {
                    // isfirst(array[i][j]);
                    check=1;
                    // cout<<check<<" ";
                    break;
                }
                else if(array[i][j]=='.')
                {
                    tmp++;
                    crose=j;
                    // cout<<tmp<<" ";
                    v.push_back(tmp);
                }
            }
            if((!check) && (res>tmp))
            {
                res=tmp;
                cnt=1;
                if(res==1)
                    hash[crose]++;
                // cout<<res<<" ";
                v.push_back(hash[crose]);
            }
            else if((!check) && (res==tmp))
            {
                cnt++;
                if(res==1)
                    hash[crose]++;

                // cout<<cnt<<" ";
            }
        }
        for(int i=0;i<n;i++)
        {
            selectionSort(arr,n);
            if(!hash[i])
            {
                tmp=0,check=0;
                for(int j=0;j<n;j++)
                {
                    un[i]= isfirst(array[i][j]);
                    if(array[j][i]=='O')
                    {
                        check=1;
                        // cout<<cnt<<" ";
                        v.push_back(i);
                        break;
                    }
                    else if(array[j][i]=='.')
                    {
                        isfirst(array[i][j]);
                        tmp++;
                        // cout<<tmp<<" ";
                        v.push_back(tmp);
                    }
                }
                if((!check) && (res>tmp))
                {
                    res=tmp;
                    cnt=1;
                    // cout<<res<<" ";
                    v.push_back(res);
                }
                else if((!check) && (res==tmp))
                    cnt++;
            }
        }
        selectionSort(arr,n);
        if(res==INT_MAX)
            output<<"Case #"<<run<<": Impossible";
        else
            output<<"Case #"<<run<<": "<<res<<" "<<cnt;
        if(run!=t)
            output<<endl;
    }
    file.close();
    output.close();
    return 0;
}

bool isfirst(char a)
{
    if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        return true;
    return false;
}
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++){  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
        int temp= arr[i];
        arr[i]= arr[min_idx];
        arr[min_idx]= temp;
    }  
} 

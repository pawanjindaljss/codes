// C++ program to demonstrate sorting/in vector of 
// pair according to 2nd element of pair in 
// descending order 
#include<bits/stdc++.h> 
using namespace std; 

// Driver function to sort the vector elements by 
// second element of pair in descending order 
bool sortbysecdesc(const pair<int,int> &x, 
				const pair<int,int> &y) 
{ 
	if (x.second != y.second)
					return x.second > y.second;

				// compare first only if second value is equal
				return x.first < y.first;
} 


int main() 
{ 
	// Declaring vector of pairs 
	vector< pair <int,int> > vect; 
	vector<int> v;
	// Initializing 1st and 2nd element of 
	// pairs with array values 
	int arr[] = {5,5,4,6,4}; 
	map<int, int> mp;
	map<int, int> ::iterator it;
	int n = sizeof(arr)/sizeof(arr[0]); 
	for(int i=0;i<n;i++)
		mp[arr[i]]++;
	for(it=mp.begin();it!=mp.end();it++)
	{
		vect.push_back(make_pair(it->first,it->second));
	}
	

	// using modified sort() function to sort 
	sort(vect.begin(), vect.end(), sortbysecdesc); 
	//sort(vect.begin(), vect.end(), sortbysecaesc);
	// Printing the sorted vector(after using sort()) 
	cout << "The vector after applying sort operation is:\n" ; 
	for (int i=0; i<vect.size(); i++) 
	{ 
		// "first" and "second" are used to access 
		// 1st and 2nd element of pair respectively 
		for(int j=0;j<vect[i].second;j++)
			v.push_back(vect[i].first); 
	}
	for (int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";
	return 0; 
} 

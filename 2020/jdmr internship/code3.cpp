#include <bits/stdc++.h>
using namespace std;
class CoolString
{
	private:
	char* m_array;
	int m_size;
	
	public:
    CoolString(int size)
    {
    	char x=new char[size];
    	m_array=x;
    } 
	CoolString(const CoolString& original); 

     //delete array
	~CoolString(); 

     //returns the length of the array 
	int length() const; 

     //return the character at an index
	char getEntry(int index) const; 

      //stores character at an index
	bool setEntry(int index, char entry); 

      // returns true is same size and all 
      //value are in the same order 
	bool operator==(const CoolString& rhs) const; 
                                                                                     
      //returns true if not the same (either differing size or 
      //values)
	bool operator!=(const CoolString& rhs) const; 
};
int main(int argc, char *argv[])
{
	ifstream myfile;
    myfile.open(argv[1]);
    if(!myfile)
    {
    	cout<<"file doesn't exist"<<endl;
    	exit(1);
    }
    int num;
    myfile >> num;
    char data[num];
	for(int i = 0; i < num; i++)
        myfile >> data[i];
    CoolString* myCS= (CoolString*)malloc(sizeof(CoolString) * 1);   
    myCS[0]= CoolString(num);
    for(int i=0; i< num; i++)
    {
        myCS[0].setEntry(i, data[i]);
    }
    return myCS[0];
}
#include <bits/stdc++.h>
#include <fstream>
using namespace std;


class Driver{
private:
	string first_name, last_name; 
	long license_number;
	int age, voter_status;

public:
	Driver(string first,string last, int ages,char voter, long license)
	{
		first_name=first;
		last_name= last;
		license_number= license;
		age= ages;
		if(voter=='Y')
			voter_status=1;
		else
			voter_status=0;
	}
	void displayalldata()
	{
		cout<<last_name<<", "<<first_name<<" ("<<age<<"): "<<license_number<<endl;
	}

	int displaydataforvoter()
	{
		int cnt=0;
		if(voter_status)
		{
			cout<<last_name<<", "<<first_name<<" ("<<age<<"): "<<license_number<<endl;
			cnt++;
		}
		return cnt;
	}

	int displayalldata(int x, int y)
	{
		int cnt=0;
		if(age>=x && age<=y)
		{
			cout<<last_name<<", "<<first_name<<" ("<<age<<"): "<<license_number<<endl;
			cnt++;
		}
		return cnt;
	}

	int displayalldata(char c)
	{
		int cnt=0;
		if(tolower(last_name[0])==tolower(c))
		{
			cout<<last_name<<", "<<first_name<<" ("<<age<<"): "<<license_number<<endl;
			cnt++;
		}
		return cnt;
	}
};

int main(int argc, char *argv[])
{
	if (argc < 2) {     /* validate at least filename given */
        cerr << "error: insufficient arguments\n"
                "usage: " << argv[0] << " filename (nresults: 3)\n";
        return 1;
    }
    ifstream myfile;
    myfile.open(argv[1]);
    if(!myfile)
    {
    	cout<<"file doesn't exist"<<endl;
    	exit(1);
    }
    string first_name, last_name, line,word, temp, voter_status; 
	long license_number;
	int age;
	int num;
	getline(myfile, word);
	stringstream geek(word);
	geek >>num;
    Driver* array = (Driver*)malloc(sizeof(Driver) * num);
    for(int i=0;i<num;i++)
    {
    	getline(myfile, line);   
        stringstream s(line);
        getline(s, first_name, ' ');
        getline(s, last_name, ' ');
        getline(s, word, ' ');
        stringstream geek(word);
		geek >>age;
        getline(s, voter_status, ' ');
        getline(s, temp, ' ');
        stringstream lcn(temp);
		lcn >>license_number;
        array[i]=Driver(first_name, last_name, age, voter_status[0], license_number);
    }


    myfile.close();
	int choice;
    while(1)
    {
    	cout<<"Make a selection:"<<endl<<"1) Print all Drivers Info"<<endl<<"2) Print all voters"<<endl<<"3) Print drivers by last initial"<<endl<<"4) Print drivers in age range"<<endl<<"5) Exit"<<endl<<"Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				cout<<endl;
				if(num<1)
					cout<<"No data found!!! ";
				else
				{
					for(int i=0;i<num;i++)
						array[i].displayalldata();	
				}
				cout<<endl;
				break;
			}
			case 2:
			{
				cout<<endl;
				int cnt=0;
				for(int i=0;i<num;i++)
					cnt+=array[i].displaydataforvoter();
				if(!cnt)
					cout<<"No data Found!!! ";
				cout<<endl;
				break;
			}
			case 3:
			{
				cout<<endl;
				string x;
				cout<<"Enter first character of last name: ";
				cin>>x;
				if(x.length()>1)
					cout<<"Enter only one character!!!! ";
				else
				{
					if(isdigit(x[0]))
						cout<<"Enter character only!!! ";
					else
					{
						int cnt=0;
						for(int i=0;i<num;i++)
							cnt+=array[i].displayalldata(x[0]);
						if(!cnt)
							cout<<"No data Found!!! ";
					}
				}
				cout<<endl;
				break;	
			}
			case 4:
			{
				int x,y;
				cout<<"Enter minimum age of the driver: ";
				cin>>x;
				while(cin.fail()) {
			        cout << "Error" << endl;
			        cin.clear();
			        cin.ignore(256,'\n');
			        cin >> x;
		    	}
		    	cout<<"Enter maximum age of the driver: ";
		    	cin>>y;
		    	while(cin.fail()) {
			        cout << "Error" << endl;
			        cin.clear();
			        cin.ignore(256,'\n');
			        cin >> y;
		    	}
		    	cout<<endl;
				int cnt=0;
				for(int i=0;i<num;i++)
					cnt+=array[i].displayalldata(x,y);
				if(!cnt)
					cout<<"No data Found!!! ";
				cout<<endl;
				break;
			}
			case 5:
			{
				exit(1);	
			}
			default:
			{
				cout<<"Wrong choice...";
				break;
			}
		}
    }
    return 0;
}
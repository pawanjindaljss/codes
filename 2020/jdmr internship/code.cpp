#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream myfile;
    int num=atoi(argv[2]);
    int* data=new int[num];
    myfile.open(argv[1]);

    for(int i = 0; i < num; i++)
        myfile >> data[i];

    myfile.close();
	
	int choice;
    while(1)
    {
    	cout<<"Make a selection:"<<endl<<"1) insert"<<endl<<"2) Remove"<<endl<<"3) Count"<<endl<<"4) Print"<<endl<<"5) Exit"<<endl<<"Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				int x,y;
				num++;
				cout<<"Enter Element posion and value: ";
				cin>>x>>y;
				if(x<1 || x>num)
				{
					cout<<"Wrong Index"<<endl;
					continue;
				}
				int* arr=new int[num];
				for(int i=0;i<x-1;i++)
					arr[i]=data[i];
				arr[x-1]=y;
				for(int i=x;i<num;i++)
					arr[i]=data[i-1];
				data=arr;

				break;
			}
			case 2:
			{
				if(x<1 || x>num)
				{
					cout<<"Wrong Index"<<endl;
					continue;
				}
				int xx;
				cout<<"Enter Element posion: ";
				cin>>xx;
				int* ar=new int[num-1];
				for(int i=0;i<xx-1;i++)
					ar[i]=data[i];
				for(int i=xx;i<num;i++)
					ar[i-1]=data[i];
				data=ar;
				num--;
				break;
			}
			case 3:
			{
				int input;
				cout<<"Enter value you want to search: ";
				cin>>input;
				int count=0;
				for(int i=0;i<num;i++)
					if(data[i]==input)
						count++;
				cout<<endl<<"Element fount "<<count<<" times."<<endl;
				break;
			}
			case 4:
			{
				for(int i=0;i<num;i++)
					cout<<data[i]<<" ";
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
			;
		}
    }
    return 0;
}
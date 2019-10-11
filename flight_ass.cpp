#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class flight
{
	private:
		double flight_no;
		char source[3]={},destination[3]={};
		int seats;
	public:
		flight()
		{
			cout<<"Enter Source\n";
			cin>>source;
			if(strlen(source)!=3)
			{
				return source.toUpperCase();
			}
			else
				cout<<"ddd";
			cout<<"Enter Destination\n";
			cin>>destination;
			
		}
};
int main()
{
	flight f1;
	getch();
}

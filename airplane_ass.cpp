#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"     WELCOME TO AIRPLANE RESERVATION SYSTEM"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"1. Book First Class Seats"<<endl;
	cout<<"2. Book Business Class Seats"<<endl;
	cout<<"3. Book Economy Class Seats"<<endl;
	cout<<"4. View Airplane Seating Assignment"<<endl;
	cout<<"5. Know Fair"<<endl;
	cout<<"6. System Reset"<<endl;
	cout<<"7. Exit From The Booking System"<<endl;
	for(int i=0;i<=11;i++)
	{
		for(int j=0;j<=5;j++)
		{
			cout<<" 0 ";
		}
		cout<<endl;
	}
	cout<<"Enter your choice"<<endl;
	cin>>n;
	if(n==1)
    {
        cout<<"Book First Class Seats";
        int seats;
        cout<<"How many Seats you wanna book?";
        cin>>seats;
        for(int a=1;a<=seats;a++)
        {
            if
        }

    }
    else if(n==2)
    {
        cout<<"Book Business Class Seats";

    }
    else if(n==3)
    {
        cout<<"Book Economy Class Seats";

    }
	else if(n==4)
    {
        cout<<"View Airplane Seating Assignment";

    }
    else if(n==5)
    {
        cout<<"Know Fair";
        cout<<"First Class Seat Fair = 105,000"<<endl;
        cout<<"Business Class Seat Fair = 68,000"<<endl;
        cout<<"Economy Class Seat Fair = 35,000"<<endl;

    }
    else if(n==6)
    {
        cout<<"System Reset";

    }
    else if(n==7)
    {
        cout<<"Exit From The Booking System";
    }
    else
    {
        cout<<"sorry";
    }






}

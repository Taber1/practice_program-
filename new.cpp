#include<conio.h>
#include<iostream>
using namespace std;
int x,seats,i,j,n=0,booked=0,fc=105000,bc=68000,ec=35000,totalfair;
bool seatsArr[12][7]={false};
double firstClass()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<7;j++)
		{
			if(seatsArr[i][j]==false)
			n++;			
		}
	}
	if(n>seats)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<7;j++)
			{
				if(seatsArr[i][j]==false && booked!=seats)
				{
					seatsArr[i][j]=true;
					booked++;
				}
				
			}
		}
		return fc*seats;
	}
	else 
		return -1;
}
double businessClass()
{
	for(i=2;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(seatsArr[i][j]==false)
			n++;			
		}
	}
	if(n>seats)
	{
		for(i=2;i<7;i++)
		{
			for(j=0;j<7;j++)
			{
				if(seatsArr[i][j]==false && booked!=seats)
				{
					seatsArr[i][j]=true;
					booked++;
				}
				
			}
		}
		return bc*seats;
	}
	else
		return -1;
}
double economyClass()
{
	for(i=7;i<12;i++)
	{
		for(j=0;j<7;j++)
		{
			if(seatsArr[i][j]==false)
			n++;			
		}
	}
	if(n>=seats)
	{
		for(i=7;i<12;i++)
		{
			for(j=0;j<7;j++)
			{
				if(seatsArr[i][j]==false && booked!=seats)
				{
					seatsArr[i][j]=true;
					booked++;
				}				
			}
		}
		return ec*seats;
	}
	else
	return -1;
}
void selectMenu()
{
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
	cout<<"Enter Your Choice"<<endl;
}
void SEATSARR()
{
	cout<<"airplane seating arrangement is \n";
	for(i=0;i<12;i++)
	{
		for(j=0;j<7;j++)
		{
			cout<<" "<<seatsArr[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void systemReset()
{
	for(i=0;i<12;i++)
	{
		for(j=0;j<7;j++)
		{
			seatsArr[i][j]=false;
		}
	}
}
int main()
{
	while(x!=7)
	{
		selectMenu();
		cin>>x;
		switch(x)
		{
			case 1:
			{
				cout<<"Book First Class Seats"<<endl;
				cin>>seats;
				totalfair=firstClass();
				if(totalfair!=-1)
				{
					cout<<"Congratulations your booking has been done"<<endl;
					cout<<"Total fair is "<<totalfair<<endl;
					SEATSARR();
				}
				else
					cout<<"Sorry,seats are already booked"<<endl;
				break;
	    	}
			case 2:
			{
				cout<<"Book Business Class Seats"<<endl;
				cin>>seats;
				totalfair=businessClass();
				if(totalfair!=-1)
				{
					cout<<"Congratulations your booking has been done"<<endl;
					cout<<"Total fair is "<<totalfair<<endl;
					SEATSARR();
				}
				else
					cout<<"Sorry,seats are already booked"<<endl;
				break;
				
			}
			case 3:
			{
				cout<<"Book Economy Class Seats"<<endl;
				cin>>seats;
				totalfair=economyClass();
				if(totalfair!=-1)
				{
					cout<<"Congratulations your booking has been done"<<endl;
					cout<<"Total fair is "<<totalfair<<endl;
					SEATSARR();
				}
				else
					cout<<"Sorry,seats are already booked"<<endl;
				break;
			}
			case 4:
			{
		    	SEATSARR();
				break;
			}
			case 5:
			{
				cout<<"Know Fair";
				cout<<"First Class Seat Fair = 105,000"<<endl;
        		cout<<"Business Class Seat Fair = 68,000"<<endl;
        		cout<<"Economy Class Seat Fair = 35,000"<<endl;
				break;
			}
			case 6:
			{
				cout<<"Are you sure to reset the system??"<<endl;
				cout<<"\n(y/n)";
				char reset=getche();
				if(reset=='y'||reset=='Y')
				{
					system("cls");
					systemReset();
				}
				break;
			}
			case 7:
			{	
				exit(0);
				break;
			}
			default:
			{
				cout<<"you made the wrong choice..";
				break;
			}
		}
	}
	x++;
	getch();	
}



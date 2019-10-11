
#include<conio.h>
#include<iostream>
using namespace std;
class car
{
	public:
		char brand_name[20]={};
		double price_when_new;
		char color[10]={};
		double odometer;
		void inputDetails()
		{
			cout<<"Enter Brand Name:\n";
			cin>>brand_name;
			cout<<"Enter Price When New:\n";
			cin>>price_when_new;
			cout<<"Enter Color:\n";
			cin>>color;
			cout<<"Enter Meters which has been covered:\n";
			cin>>odometer;
		}
		double getPriceAfterUse()
		{
			double price_after_use;
			price_after_use=price_when_new*(1-odometer/600000);
			cout<<"Price After Use is : "<<price_after_use<<endl;
		}	
		void outputDetails()
		{
			double n;
			cout<<"Brand Name is : "<<brand_name<<endl;
			cout<<"Price when new is : "<<price_when_new<<endl;
			cout<<"Color : "<<color<<endl;
			cout<<"Distance which has been covered : "<<odometer<<endl;
			n=getPriceAfterUse();
			cout<<n<<endl;		
		}
};
int main()
{
	car c1;
	c1.inputDetails();
	c1.getPriceAfterUse();
	c1.outputDetails();
}

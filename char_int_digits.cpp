#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ten,unit;
	int Ten,Unit,Number;
	cout<<"enter two digit numbers"<<endl;
	cout<<"first digit: ";
	cin>>ten;
	cout<<"second digit: ";
	cin>>unit;
	Ten=ten-'0';
	Unit=unit-'0';
    Number=Ten*10+Unit; 
	cout<<Number;
	getch();
	
}

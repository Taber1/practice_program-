#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[3], b[3], *p=NULL, * p1, * p2;
	p1 = a;
	p2 = b;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter 3 elements for first array : ";
		cin >> *p1;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter 3 elements for second array : ";
		cin >> *p2;
	}
	for (int i = 0; i < 3; i++)
	{
		p[i]= &p1[i] + &p2[i];
		cout <<&p[i]<<" "<<endl;
	}
	return 0;
}

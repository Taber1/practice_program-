#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[] = { 10,20,30,35 }, b[] = { 3,6,9,15 };
	int* p,*q;
	p=&a;q=&b;
	for (int i = 0; i <= 3; i++)
	{
		cout << a[i] << b[i];
	}
	system("pause");
	getche();
}

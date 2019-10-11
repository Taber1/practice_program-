#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,price;
    float cost=5.50;
    cout<<"No. of bags to be ordered"<<endl;
    cin>>n;
    price=n*cost;
    cout<<"Price of "<<n<<" boxes is "<<price;
    getch();

}

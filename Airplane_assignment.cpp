#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void seatARR(bool seatArr[][7] )
{cout<<"airplane seating plan is shown below"<<endl;
cout<<"----------------------------------------"<<endl;
for(int i=0;i<=11;i++)
{
    for(int j=0;j<=6;j++)
    {
        cout<<seatArr[i][j]<<"\t";
    }
    cout<<endl;
}
}
double firstClass(bool seatArr[][7], int seats, double price)
{int n=0,booked=0;
for(int i=0;i<2;i++)
{
for(int j=0;j<7;j++){
    if(seatArr[i][j]==false)
    {
        n++;
    }
}
}
if(n>=seats){
   for(int i=0;i<2;i++)
{
for(int j=0;j<7;j++){
    if(seatArr[i][j]==false && booked!=seats){
    seatArr[i][j]=true;
    booked++;}
}
}
return price*seats;
}
else
return -1;

}
double businessClass(bool seatArr[][7], int seats, double price)
{int n=0,booked=0;
for(int i=2;i<7;i++)
{
for(int j=0;j<7;j++){
    if(seatArr[i][j]==false)
    {
        n++;
    }
}
}
if(n>=seats){
   for(int i=2;i<7;i++)
   {
for(int j=0;j<7;j++){
    if(seatArr[i][j]==false && booked!=seats){
    seatArr[i][j]=true;
    booked++;}
}
}
return price*seats;
}
else
return -1;

}
double economyClass(bool seatArr[][7], int seats, double price)
{int n=0,booked=0;
for(int i=7;i<12;i++)
{
for(int j=0;j<7;j++){
    if(seatArr[i][j]==false)
    {
        n++;
    }
}
}
if(n>=seats){
   for(int i=7;i<12;i++)
{
for(int j=0;j<7;j++){
    if(seatArr[i][j]==false && booked!=seats){
    seatArr[i][j]=true;
    booked++;}
}
}
return price*seats;
}
else
return -1;

}
void selectMenu(){
cout << "----------------------------------------" << endl;
cout << " Welome to Air Plane Reservation System" << endl;
cout << "----------------------------------------" << endl;
cout<<"1. Book First Class Seats"<<endl;
cout<<"2. Book Business Class Seats"<<endl;
cout<<"3. Book Economy Class Seats"<<endl;
cout<<"4. View Air Plane Seating Assignment"<<endl;
cout<<"5. Know Fair"<<endl;
cout<<"6. System Reset"<<endl;
cout<<"7. Exit From The Booking System"<<endl;
cout<<"Enter Your Choice"<<endl;
}
void knowFair(double ff, double bf, double ef){
cout<<"\nThe fair of first class is "<<ff<<endl;
cout<<"The fair of business class is "<<bf<<endl;
cout<<"The fair of economy class is "<<ef<<endl;
}
void reSetSystem(bool seatArr[][7])
{
for(int i=0;i<12;i++)
{
    for(int j=0;j<7;j++){
        seatArr[i][j]=false;
    }
}
}
int main()
{bool seatArr[12][7]={false};

char c;int x ;double pfirst=105000,pbusiness=68000,peconomy=35000,price;
while(true){
    
        selectMenu();
    c=getche();
    
switch(c){
case '1':{
    cout<<"\nEnter the no of seats"<<endl;
    cin>>x;
price=firstClass(seatArr,x,pfirst);
if(price !=-1){
    cout<<"Congratulations you have got your booking in First Class"<<endl;
    cout<<"Total Fair of Your Booking is "<<price<<endl;
}
else
    cout<<"We don't have enough seats left to process your request"<<endl;
seatARR(seatArr);
    getch();
    break;}
case '2':
    cout<<"\nEnter the no of seats"<<endl;
    cin>>x;

price=businessClass(seatArr,x,pbusiness);
if(price !=-1){
    cout<<"Congratulations you have got your booking in Business Class"<<endl;
    cout<<"Total Fair of Your Booking is "<<price<<endl;
}
else
    cout<<"We don't have enough seats left to process your request"<<endl;

seatARR(seatArr);
    getch();
    break;
case '3':
    cout<<"\nEnter the no of seats"<<endl;
    cin>>x;
price=economyClass(seatArr,x,peconomy);
if(price !=-1){
    cout<<"Congratulations you have got your booking in Economy Class"<<endl;
    cout<<"Total Fair of Your Booking is "<<price<<endl;
}
else
    cout<<"We don't have enough seats left to process your request"<<endl;
seatARR(seatArr);
    getch();
    break;
case '4':
    cout << "----------------------------------------" << endl;
    seatARR(seatArr);
    cout << "----------------------------------------" << endl;
    getch();
    break;
case '5':
    knowFair(pfirst,pbusiness,peconomy);
    getch();
    break;
case '6':{
    cout<<"Are you sure you wanna reset all the data(y/n)?"<<endl;
    char d=getche();
    if(d=='y')
    {system("cls");
    reSetSystem(seatArr);
    }

    break;}
case '7':
    exit(0);
     break;
default:
    cout<<"Enter the correct choice"<<endl;
    break;
    }
	}   
    
}


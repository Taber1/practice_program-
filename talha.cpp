#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void displaySeat(bool airplane[][7] )
{cout<<"Airplane seating plan is shown below"<<endl;
cout<<"----------------------------------------"<<endl;
for(int i=0;i<=11;i++)
{
    for(int j=0;j<=6;j++)
    {
        cout<<airplane[i][j]<<"\t";
    }
    cout<<endl;
}
}
double firstClass(bool airplane[][7], int seats, double price)
{int count=0,alreadyassigned=0;
for(int i=0;i<2;i++)
{
for(int j=0;j<7;j++){
    if(airplane[i][j]==false)
    {
        count++;
    }
}
}
if(count>seats){
   for(int i=0;i<2;i++)
{
for(int j=0;j<7;j++){
    if(airplane[i][j]==false && alreadyassigned!=seats){
    airplane[i][j]=true;
    alreadyassigned++;}
}
}
return price*seats;
}
else
return -1;

}
double businessClass(bool airplane[][7], int seats, double price)
{int count=0,alreadyassigned=0;
for(int i=2;i<7;i++)
{
for(int j=0;j<7;j++){
    if(airplane[i][j]==false)
    {
        count++;
    }
}
}
if(count>seats){
   for(int i=2;i<7;i++)
   {
for(int j=0;j<7;j++){
    if(airplane[i][j]==false && alreadyassigned!=seats){
    airplane[i][j]=true;
    alreadyassigned++;}
}
}
return price*seats;
}
else
return -1;

}
double economyClass(bool airplane[][7], int seats, double price)
{int count=0,alreadyassigned=0;
for(int i=7;i<12;i++)
{
for(int j=0;j<7;j++){
    if(airplane[i][j]==false)
    {
        count++;
    }
}
}
if(count>seats){
   for(int i=7;i<12;i++)
{
for(int j=0;j<7;j++){
    if(airplane[i][j]==false && alreadyassigned!=seats){
    airplane[i][j]=true;
    alreadyassigned++;}
}
}
return price*seats;
}
else
return -1;

}
void seatChoiceMenu(){
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
void reSetSystem(bool airplane[][7])
{
for(int i=0;i<12;i++)
{
    for(int j=0;j<7;j++){
        airplane[i][j]=false;
    }
}
}
int main()
{bool airplane[12][7]={false};

char c;int x ;double pfirst=105000,pbusiness=68000,peconomy=35000,price;
while(true){
    
        seatChoiceMenu();
    c=getche();
    
switch(c){
case '1':{
    cout<<"\nEnter the no of seats"<<endl;
    cin>>    x;
price=firstClass(airplane,x,pfirst);
if(price !=-1){
    cout<<"Congratulations you have got your booking in First Class"<<endl;
    cout<<"Total Fair of Your Booking is "<<price<<endl;
}
else
    cout<<"We don't have enough seats left to process your request"<<endl;
displaySeat(airplane);
    getch();
    break;}
case '2':
    cout<<"\nEnter the no of seats"<<endl;
    cin>>x;

price=businessClass(airplane,x,pbusiness);
if(price !=-1){
    cout<<"Congratulations you have got your booking in Business Class"<<endl;
    cout<<"Total Fair of Your Booking is "<<price<<endl;
}
else
    cout<<"We don't have enough seats left to process your request"<<endl;

displaySeat(airplane);
    getch();
    break;
case '3':
    cout<<"\nEnter the no of seats"<<endl;
    cin>>x;
price=economyClass(airplane,x,peconomy);
if(price !=-1){
    cout<<"Congratulations you have got your booking in Economy Class"<<endl;
    cout<<"Total Fair of Your Booking is "<<price<<endl;
}
else
    cout<<"We don't have enough seats left to process your request"<<endl;
displaySeat(airplane);
    getch();
    break;
case '4':
    cout << "----------------------------------------" << endl;
    displaySeat(airplane);
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
    reSetSystem(airplane);
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

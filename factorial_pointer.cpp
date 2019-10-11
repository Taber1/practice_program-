#include <iostream>
using namespace std;
int factorial (int a)
{
 if (a==1)
 return 1;
 return factorial(a-1)*a;
}
main()
{
 int x=0;
 int *p;
 cout << "Enter a Number ";
 cin >> x;
 p = &x;
 cout << "\n";
 cout <<"The factorial of " << x
 << " is " << factorial(x)<< ".";
 cout << "\n\n";
}

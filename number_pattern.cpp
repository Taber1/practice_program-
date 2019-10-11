#include<iostream>
using namespace std;
int main()
{
	int k=0;
	for(int i=1;i<=5;i++)
	{
		int n=1;
    	for(int j=1;j<=9;j++)
    	{
    		if(j<=i+k)
    		{
    			if(n<i)
    			{
    				cout<<n;
    				n=n+1;
				}
				if(n==i)
				{
					cout<<n;
					n--;
					if(n>=1)
					{
						
						cout<<n;
					}
				}
			}
			else
			{
				cout<<" ";
			}
		}
        cout<<"\n";
        k=k+1;
	}
}


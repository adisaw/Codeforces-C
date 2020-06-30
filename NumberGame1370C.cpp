#include<bits/stdc++.h>
using namespace std;
const int N= 50000;
int prime(int n)
{
	for(int i=2;i<min(N,n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void solve()
{
	int n;
	cin>>n;
	
		if(n==1)
		{
			cout<<"FastestFinger"<<endl;
		}
		else if(n==2)
		{
			cout<<"Ashishgup"<<endl;
		}
		else if(n%2==1)
		{
			cout<<"Ashishgup"<<endl;
		}
		else
		{
			int temp=0;
			int flag=0;
			if((n&(n-1))!=0)
			{
				flag=1;
			}
			if(flag==1)
			{
				if(n%4==0)
				{
					cout<<"Ashishgup"<<endl;
				}
				else
				{

					if(prime(n/2))
					{
							cout<<"FastestFinger"<<endl;
					}
					else
					{
						cout<<"Ashishgup"<<endl;
					}
				}
			}
			else if(flag==0)
			{
				cout<<"FastestFinger"<<endl;
			}
			

		}

	
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
		solve();

}
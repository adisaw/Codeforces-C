#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		int max=0;
		int count=0;
		for(int i=0;i<str.size();i++)
		{
			if(str.at(i)==')')
				count++;
			else
				count--;

			if(count>max)
				max=count;
		}
		cout<<max<<endl;
		t--;
	}
}
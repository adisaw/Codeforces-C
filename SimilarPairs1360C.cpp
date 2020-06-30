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
		vector<int> arr;
		int even=0,odd=0;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			arr.push_back(temp);
			if(temp%2==0)
				even++;
			else
				odd++;
		}
		
		if(odd%2==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			sort(arr.begin(),arr.end());
			int flag=0;
			for(int i=0;i<n-1;i++)
			{
				
				if((arr[i+1]-arr[i])==1)
				{
					flag=1;
				}
			}
			if(flag==1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		t--;


	}
}
#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t>0)
	{
		string str;
		cin>>str;
		vector <int> arr(str.size()+1);
		arr[0]=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='+')
			{
				arr[i+1]=arr[i]+1;
			}
			else
			{
				arr[i+1]=arr[i]-1;
			}
		}
		ll res=0;
		ll cur=0;
		ll flag=0;
		ll currpos=0;
		while(currpos<=str.size())
		{
			
			if(arr[currpos]+cur<0)
			{
				res=res+currpos;
				cur++;
			}
			currpos++;
		}
		res=res+str.size();
		cout<<res<<endl;
		t--;
	}
	return 0;
}
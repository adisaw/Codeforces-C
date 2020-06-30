#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k;
		cin>>n>>k;
		string inp;
		cin>>inp;
		int count=0;
		for(int i=0;i<inp.size();)
		{
			//cout<<"i= "<<i<<endl;
			if(inp[i]=='0')
			{
				int flag=0;
				int start=i-k;
				int end=i+k;
				if(start<0)
					start=0;
				if(end>inp.size()-1)
					end=inp.size()-1;
				//cout<<start<<" "<<end<<endl;
				for(int j=start;j<=end;j++)
				{
					if(inp[j]=='1')
					{
						flag=1;
						i=j+k+1;
					}
				}
				if(flag==0)
				{
					count++;
					i=i+k+1;
				}
			}
			else
			{
				i++;
			}
		}
		cout<<count<<endl;
		t--;
	}
}
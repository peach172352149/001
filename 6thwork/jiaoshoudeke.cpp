#include<iostream>
using namespace std;
int main()
{
	int iscancel(int a[],int n,int k);
	int n,k,a[1000]={101};
	cin>>n>>k;
	for(int s=0;s<n;s++)
	{
		cin>>a[s];
	}
	int d=0;
	for(int s=0;s<n;s++)
	{
		if(a[s]>=0&&a[s]<=100)
		{
			d++;
		}
	}
	if(d>=k)
	{
		cout<<"Yes";
	}
	else
	{
	    cout<<"No";	
	}
	return 0;
}

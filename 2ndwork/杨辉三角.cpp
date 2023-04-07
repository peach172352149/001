#include<iostream>
using namespace std;

int main()
{
	int z;
	cin>>z;
	for(int d=0;d<z;d++)
	{
	int n;
	cin >>n;
	int q[20][100]={0};
	q[0][1]=1;
	for(int a=0;a<n;a++)
	{
		if(a!=0)
		{
			for(int s=1;s<=a+1;s++)
			{
				q[a][s]=q[a-1][s-1]+q[a-1][s];
			}	
		}
	}
	for(int a=0;a<n;a++)
	{
		for(int s=1;s<=a+1;s++)
		{
			if(s==a+1)
			cout<<q[a][s]<<endl;
			if(s!=a+1)
			cout<<q[a][s]<<' ';
		}
	}
	}
	return 0;
	
}

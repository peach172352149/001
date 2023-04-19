#include<iostream>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	for(int a=0;a<n;a++)
	{
		int m=0,k=0;
		cin>>m>>k;
		int q[100]={0};
		int d=m+1;
		for(int s=0;s<k;d++)
		{
			int w[100]={0},g=0,f=0;
			for(int e=d;e>0;e=e/10,g++)
			{
			 	w[g]=e%10;
			}
			for(int e=0;e<g/2;e++)
			{
				if(w[e]==w[g-e-1])
				{
					f=0;
				}
				else
				{
					f=1;
					goto bee;
				}
			}
			bee:
			if(f==0)
			{
				cout<<d<<" ";
				s++;
			}
		}
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(void)
{
	int n=0;
	cin>>n;
	int q[100][100]={0},w[100]={0};
	for(int a=0;a<n;a++)
	{
		for(int s=0;s<n;s++)
		{
			cin>>q[a][s];
		}
	}
	for(int p=0;p<n;p++)
{
	for(int a=0;a<n;a++)
	{
		q[p][a]=w[a];
	}
	for(int a=0;a<n;a++)
	{
		for(int s=a+1;s<n;s++)
		{
		  	if(w[a]>w[s])
			{
				int pp=0;
				pp=w[a];
				w[a]=w[s];
				w[s]=pp;
			}
		}
	}/计算行最大值/
	
	}
}

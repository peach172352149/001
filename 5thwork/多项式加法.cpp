#include<iostream>
using namespace std;
int main(void)
{
	int q[100][2]={0},w[100][2]={0},e[100][2]={0},r[100]={0};
	int a=0,s=1;
	
	for(;s!=0;a++)
	{
		cin>>q[a][0]>>q[a][1];
		s=q[a][0];
	}
	int f=0,d=1;
	for(;d!=0;f++)
	{
		cin>>w[f][0]>>w[f][1];
		d=w[f][0];
	}
	for(int i=0;i<a;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if(q[j][0]>q[i][0])
			{
				int pp=q[j][0];
				q[j][0]=q[i][0];
				q[i][0]=pp;
			}
		}
	}
	for(int i=0;i<f;i++)
	{
		for(int j=i+1;j<f;j++)
		{
			if(w[j][0]>w[i][0])
			{
				int pp=w[j][0];
				w[j][0]=w[i][0];
				w[i][0]=pp;
			}
		}
	}
	int g=0,k=0;
    for(int z=0;z<a;z++)
	{
		for(int x=0,l=0;x<f;x++)
		{
			if(q[z][0]==w[x][0])
			{
				e[g][0]=q[z][0];
				e[g][1]=q[z][1]+w[z][1];
				//r[k]=x;
				//k++;
				g++;
				l=1;
			}
			if(l=0 &&q[z][0]>w[x][0]&&q[z-1][0]<w[x][0])
			{
				e[g][0]=w[x][0];
				e[g][1]=w[x][1];
				g++;
				l=1;
			}
			if(l=0)
			{
			e[g][0]=q[z][0];
			e[g][1]=q[z][1];
			g++;	
			}
		}
	}
	/*if(k<f)
	{
		for(int v=0;v<k;v++)
		{
			for(int b=0;b<f;b++)
			{
				
			}
		}*/
	for(int h=0;h<g;h++)
	{   if(e[h][0]!=0)
	{
		cout<<e[h][1]<<"x"<<e[h][0];
	}
	if(e[h][0]==0)
	{
		cout<<e[h][1];
	}
	if(h!=g-1)
		{
			cout<<"+";
		}
		
	}
	return 0;
}

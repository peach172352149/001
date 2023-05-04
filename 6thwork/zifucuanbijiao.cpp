#include<iostream>
#include<string>
using namespace std;
int main()
{
	string q,w;
	getline(cin,q);
	getline(cin,w);
	int dq=0,dw=0;
	for(int a=0;q[a]!='\0';a++)
	{
		dq=a;
	}
	for(int a=0;w[a]!='\0';a++)
	{
		dw=a;
	}
	for(int i=0;i<dw;i++)
	{
		int d=0;
		if(q[0]==w[i])
		{
			int g=i;
			for(int f=0;f<dq;f++,g++)
			{
				if(q[f]==w[g])
				{
					d=1;
				}
				else
				{
				    d=0;
					break;
				}
			}
		}
		if(d==1)
		{
			cout<<i;
		}
	}
}

#include<iostream>
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
	if(dw>dq)
	{
		cout<<"-1";
	}
	else
	{
		for(int a=0,d=0;a<=dq;a++)
		{
			int s=0;
			if(q[a]==w[0])
			{
				int g=a;
				for(int f=0;f<=dw;f++,g++)
				{
					if(q[g]==w[f])
					{
						s=1;
					}
					else
					{
						s=0;
						break;
					}
				}
				if(s==1)
				{
					cout<<a;
					break;
				}
			}
		}
	}
	return 0;
}


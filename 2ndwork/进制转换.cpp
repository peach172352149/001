#include<iostream>
using namespace std;
int main()
{
	int n=0;
    cin>>n;
	for(int d=0;d<n;d++)
	{
	int z;
	cin>>z;
	int b;
	cin>>b;
	int x=0;
	int q[100]={0},s=0;
	for(int a=z;a>0;a=a/b,s++)
	{
		q[s]=a%b;
	}
	for(int a=s-1;a>=0;a--)
	{
		if(q[a]<10)
		cout<<q[a];
		else
		{
			if(q[a]>=10)
			{
				switch(q[a])
				{
					case 10:cout<<'A';
					break;
					case 11:cout<<'B';
					break;
					case 12:cout<<'C';
					break;
					case 13:cout<<'D';
					break;
					case 14:cout<<'E';
					break;
					case 15:cout<<'F';
					break;
					defult:break;
				}
		}
		
	}
	}
	cout<<endl;
	}
	return 0;
}

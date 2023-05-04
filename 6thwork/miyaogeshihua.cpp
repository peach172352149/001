#include<iostream>
#include<string>
using namespace std;
int main()
{
	string q;
	int k=0;
	getline (cin,q);
	cin>>k;
	char w[1000];
	int dq=0;
	for(int a=0;q[a]!='\0';a++)
	{
		dq=a;
	}
	int s=0;
	for(int a=0;a<=dq;a++)
	{
		if(q[a]!='-')
		{
			if(q[a]>='a'&&q[a]<='z')
			{
				w[s]=q[a]-32;
				s++;
			}
			else
			{
			w[s]=q[a];
			s++;
			}
		}
	}
	int d=(s)/k,f=(s)%k;
	if(f==0)
	{
		for(int a=0;a<s;a++)
		{
			cout<<w[a];
			if(a%k==0 &&a!=0)
			{
				cout<<'-';
			}
		}
	}
	else
	{
	for(int a=0;a<s;a++)
	{
		cout<<w[a];
		if((a-f+1)%k==0 &&a!=s-1||a==f-1 &&a!=0 )
		{
			cout<<'-';
		}
	}	
	}
	
}

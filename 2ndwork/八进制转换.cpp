#include<iostream>
using namespace std;
int main()
{
	int z;
	cin>>z;
	int x=0;
	/*for(int a=z;a>0;a/10)
	{
		x++;
	}*/
	int q[100]={0},s=0;
	for(int a=z;a>0;a=a/8,s++)
	{
		q[s]=a%8;
	}
	for(int a=s-1;a>=0;a--)
	{
		cout<<q[a];
	}
	return 0;
}

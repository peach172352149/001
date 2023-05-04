#include<iostream>
using namespace std;
int main(void)
{
	int q=0,w=0;
	char p;
	cin>>q>>p>>w;
	q=q*10;
	int e[200]={0},a=0;
	for(;q%w!=0;q=q%w*10)
	{
		e[a]=q/w;
		a++;
	}
	cout<<"0.";
	for(int s=0;s<a;s++)
	{
		cout<<e[s];
	}
	return 0;
}

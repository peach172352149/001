#include<iostream>
using namespace std;

int main(void)
{
	int q=0;
	cin>>q;
	if(q>=90)
	{
		cout<<"A";
	}
	if(q>=80 &&q<90)
	{
		cout<<"B";
	}
	if(q>=70 &&q<80)
	{
		cout<<"C";
	}
	if(q>=60 &&q<70)
	{
		cout<<"D";
	}
	if(q<60)
	{
		cout<<"E";
	}
	return 0;
}

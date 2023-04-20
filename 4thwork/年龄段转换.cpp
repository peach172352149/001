#include<iostream>
using namespace std;

int main(void)
{
	int q=0;
	cin>>q;
    if(q>=1 &&q<=10)
	{
		cout<<"Children";
	}
	if(q>=11 &&q<=20)
	{
		cout<<"Teenagers";
	}
	if(q>=21 &&q<=40)
	{
		cout<<"Youth";
	}
	if(q>=41 &&q<=50)
	{
		cout<<"middle-age";
	}
	if(q>=51 &&q<=80)
	{
		cout<<"Elderly";
	}
	if(q>=81 &&q<=100)
	{
		cout<<"Old man";
	}
}

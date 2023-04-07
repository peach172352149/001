#include<iostream>
using namespace std;

int main()
{
	int y,m,d;
	cin>>y>>m>>d;
	m=-m;
	d=-d;
	int cha=0;
	cha=y-1900;
	int tian=0;
	for(int a=1900;a<y;a++)
	{
		if(a%100==0 && a%400==0)
		{
			tian=tian+366;
		}
		else if(a%100!=0 && a%4==0)
		{
			tian=tian+366;
		}
		else
		{
			tian=tian+365;
		}
	}	
	for(int a=1;a<m;a++)
	{
		if(a==1 ||a==3 ||a==5||a==7 ||a==8 ||a==10)
		{
			tian=tian+31;
		}
		else if(a==4 ||a==6 || a==9 ||a==11)
		{
			tian=tian+30;
		}
		else if(y%100==0 && y%400==0 &&a==2)
		{
			tian=tian+29;
		}
		else if(y%100!=0 &&y%4==0 &&a==2)
		{
			tian=tian+29;
		}
		else 
		{
			tian=tian+28;
		}
	}
	tian=tian+d;
	int x=0;
	x=tian%7;
	switch(x)
	{
	case 0:cout<<"Sunday";
	       break;
	case 1:cout<<"Monday";
	break;
	case 2:cout<<"Tuesday";
	break;
	case 3:cout<<"Wednesday";
	break;
	case 4:cout<<"Thursday";
	break;
	case 5:cout<<"Friday";
	break;
	case 6:cout<<"Saturday";
	break;
	}
	return 0;
}

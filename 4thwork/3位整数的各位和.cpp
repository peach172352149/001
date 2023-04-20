#include<iostream>
using namespace std;

int main(void)
{
	int q;
	cin>>q;
	int w,e,r;
	w=q%10;
	e=q/10%10;
	r=q/100;
	cout<<w+e+r<<endl;
}

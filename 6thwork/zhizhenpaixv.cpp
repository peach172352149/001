#include<iostream>
using namespace std;
void softBubble(int a[],int n);
int main()
{   
	
	int n=0,a[100];
	cin>>n;
	for(int q=0;q<n;q++)
	{
		cin>>a[q];
	}
	softBubble( a, n);
	int i=n;
	for(int j=n-1;j>=0;j--)
	{
		cout<<a[j];
		if(j!=0)
		{
			cout<<" ";
		}
	}
	
	return 0;
}
void softBubble(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1,max=0;j<=n-1;j++)
		{
			if (a[i]>a[j])
			{
				max=a[j];
				a[j]=a[i];
				a[i]=max;
			}
		}
		
		
	}	
} 

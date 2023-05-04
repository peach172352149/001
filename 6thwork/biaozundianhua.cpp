#include<iostream>
using namespace std;
int main()
{
	char q[7];
	int w[7]={0};
	cin>>q;
	for(int a=0;a<7;a++)
	{
		switch (q[a]) {
		case 'A':
	    case'B':
		case'C':
			w[a]=2;
			break;
		case 'D':
		case'E':
		case'F':
			w[a]=3;
			break;
		case 'G':
		case'H':
		case'I':
			w[a]=4;
			break;
	case 'J':
		case'K':
		case'L':
			w[a]=5;
			break;
		case 'M':
		case'N':
		case'O':
			w[a]=6;
			break;
		case 'P':
		case'Q':
		case'R':
		case'S':
			w[a]=7;
			break;
		case 'T':
		case'U':
		case'V':
			w[a]=8;
			break;
		case 'W':
		case'X':
		case'Y':
		case'Z':
			w[a]=9;	
			break;		
		default:
			//TODO
			break;
		}
	}
	for(int a=0;a<7;a++)
	{
		cout<<w[a];
	}
}

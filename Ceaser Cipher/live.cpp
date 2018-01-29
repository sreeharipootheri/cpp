#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

char enc(int , int);
using namespace std;

int main(int argc, char** argv)
{
	system("color 35");
	system("cls");
	cout<<"\nEnter key: ";
	int key;
	cin>>key;
	system("cls");
	while(1)
	{
		
		char a;
		a=getch();
		int b;
		b=a;
		if(a=='\n')
			break;
		else if(b>31&&b<126)
		{
			cout<<enc(a,key);
		}
		if(a=='\b')
		{
			cout<<'\b'<<' '<<'\b';
		}
	};
	cout<<"\n\nSucess";
	getch();
	return 0;
}

char enc(int a, int key)
{
	key=key%26;
	int nkey=key%10;
	if(a>64&&a<91)
			{
				a=a+key;
				if(a>90)
				a=a-26;
			}
			else if(a>96&&a<123)
			{
			   	a=a+key;
				   	if(a>122)
			   	a=a-26;
			}
			else if(a>47&&a<58)
			{
				a=a+nkey;
				if(a>57)
				a=a-10;
			}
			return(char(a));
}
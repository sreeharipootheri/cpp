#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <process.h>
#include <string.h>
#define size 1000

using namespace std;

class encrypt
{
	char str[size];
	int ascii[size],i,len,key,nkey;
	public:
		void process(char file[]);
		encrypt()
		{
			
		}
		encrypt(char file[])
		{
			process(file);
		}
};

void encrypt::process(char file[])
{
	ifstream fin(file,ios::in);
	ofstream fout("Encrypt.txt",ios::out);
	cout<<"\nEnter key\n";
	enter_key:
	cin>>key;
	if(key>26||key<0)
	{
		cerr<<"\aKey should have a non negative value less than 27";
		//(60*15);
		cout<<"\nEnter key again";
		goto enter_key;
	}
	system("cls");
	cout<<"\nEncryption in progress";
	nkey=key%10;
	while(!fin.eof())
	{
		fin.getline(str,size);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			ascii[i]=str[i];
			if(ascii[i]>64&&ascii[i]<91)
			{
				ascii[i]=ascii[i]+key;
				if(ascii[i]>90)
				ascii[i]=ascii[i]-26;
				str[i]=ascii[i];
			}
			else if(ascii[i]>96&&ascii[i]<123)
			{
			   	ascii[i]=ascii[i]+key;
				   	if(ascii[i]>122)
			   	ascii[i]=ascii[i]-26;
			   	str[i]=ascii[i];
			}
			else if(ascii[i]>47&&ascii[i]<58)
			{
				ascii[i]=ascii[i]+nkey;
				if(ascii[i]>57)
				ascii[i]=ascii[i]-10;
				str[i]=ascii[i];
			}
		}
		fout<<str<<'\n';
	}
	fin.close();
	fout.close();
	system("cls");
	cout<<"\nEncryption succesfull";
	cout<<"\nPress any key to countinue";
	getch();
}

int main(int argv,char *argc[])
{
	if(argv!=2)
		{
		cout<<"\nWrong arguments";
		}
	char file[size];
	strcpy(file,argc[1]);
	encrypt enc;
	enc.process(file);
	return 0;
}
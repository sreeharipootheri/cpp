#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <process.h>
#include <string.h>
#define size 1000

using namespace std;

class hack
{
	char str[size];
	int ascii[size],i,len,key,nkey;
	public:
		void process(char file[]);
		hack()
		{
			
		}
		hack(char file[])
		{
			process(file);
		}
};

void hack::process(char file[])
{
ofstream fout("Hack.txt",ios::out);
cout<<"\nHacking in progress...";
for(key=0;key<26;key++)
{
cout<<"\nDecryption using key : "<<key;
ifstream fin(file,ios::in);
fout<<"\nkey :"<<key<<"\n{\n";
nkey=key%10;
while(!fin.eof())
{
fin.getline(str,size);
len=strlen(str);
for(int i=0;str[i]!='\0';i++)
{
ascii[i]=str[i];
if(ascii[i]>64&&ascii[i]<91)
{
ascii[i]=ascii[i]-key;
if(ascii[i]<65)
ascii[i]=ascii[i]+26;
str[i]=ascii[i];
}
else if(ascii[i]>96&&ascii[i]<123)
{
ascii[i]=ascii[i]-key;
if(ascii[i]<97)
ascii[i]=ascii[i]+26;
str[i]=ascii[i];
}
else if(ascii[i]>47&&ascii[i]<58)
{
ascii[i]=ascii[i]-nkey;
if(ascii[i]<48)
ascii[i]=ascii[i]+10;
str[i]=ascii[i];
}
}
fout<<str<<'\n';
}
fout<<"\n******************************************************************";
fout<<"\n\n\n}";
fin.close();
}
fout.close();
cout<<"\nHack completed";
cout<<"\nPress any key to countinue\n";
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
	hack hck;
	hck.process(file);
	return 0;
}
#include <fstream.h>
#include <stdlib.h>
#include <conio.h>
#include <process.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>
#define size 2000
#define pass "abc"
#define VER 1.1

//Global functions
void load();
void check(int);

//Classes
class enc
{
char key[size],str[size],ch;
int ascii[size],akey[size],nkey[size],len,i;
public:
void keygen();
void encrypt();
void decrypt();
};

//functions of class enc
void enc::keygen()
{
randomize();
ifstream fin("input.txt",ios::in);
ofstream fout("key.txt",ios::out);
while(!fin.eof())
{
fin.getline(str,size);
len=strlen(str);
for(i=0;i<len;i++)
{
ch=65+random(26);
fout<<ch;
}
fout<<'\n';
}
fin.close();
fout.close();
cout<<"\nKeys generated";
}

void enc::encrypt()
{
keygen();
ifstream keyin("key.txt",ios::in);
ifstream fin("input.txt",ios::in);
ofstream fout("encrypt.txt",ios::out);
while(!fin.eof())
{
fin.getline(str,size);
keyin.getline(key,size);
len=strlen(str);
for(i=0;i<len;i++)
{
ascii[i]=str[i];
akey[i]=key[i];
akey[i]-=65;
nkey[i]=akey[i]%10;
if(ascii[i]>64&&ascii[i]<91)
{
ascii[i]=ascii[i]+akey[i];
if(ascii[i]>90)
ascii[i]=ascii[i]-26;
str[i]=ascii[i];
}
else if(ascii[i]>96&&ascii[i]<123)
{
ascii[i]=ascii[i]+akey[i];
if(ascii[i]>122)
ascii[i]=ascii[i]-26;
str[i]=ascii[i];
}
else if(ascii[i]>47&&ascii[i]<58)
{
ascii[i]=ascii[i]+nkey[i];
if(ascii[i]>57)
ascii[i]=ascii[i]-10;
str[i]=ascii[i];
}
}
fout<<str<<'\n';
}
keyin.close();
fin.close();
fout.close();
cout<<"\nEncryption completed";
}

void enc::decrypt()
{
ifstream keyin("key.txt",ios::in);
ifstream fin("input.txt",ios::in);
ofstream fout("decrypt.txt",ios::out);
while(!fin.eof())
{
fin.getline(str,size);
keyin.getline(key,size);
len=strlen(str);
for(i=0;i<len;i++)
{
ascii[i]=str[i];
akey[i]=key[i];
akey[i]-=65;
nkey[i]=akey[i]%10;
if(ascii[i]>64&&ascii[i]<91)
{
ascii[i]=ascii[i]-akey[i];
if(ascii[i]<65)
ascii[i]=ascii[i]+26;
str[i]=ascii[i];
}
else if(ascii[i]>96&&ascii[i]<123)
{
ascii[i]=ascii[i]-akey[i];
if(ascii[i]<97)
ascii[i]=ascii[i]+26;
str[i]=ascii[i];
}
else if(ascii[i]>47&&ascii[i]<58)
{
ascii[i]=ascii[i]-nkey[i];
if(ascii[i]<48)
ascii[i]=ascii[i]+10;
str[i]=ascii[i];
}
}
fout<<str<<'\n';
}
keyin.close();
fin.close();
fout.close();
cout<<"\nDecryption completed";
}

//main function
void main()
{
int ch;
load();
clrscr();
enc user;
check(1);
cout<<"\n\t\tOne time pad encryptor"<<VER;
menu:
cout<<"\nEnter your choice";
cout<<"\n0)Exit";
cout<<"\n1)Encrypt using one time pad method";
cout<<"\n2)Decrypt one time pad encryption\n";
cin>>ch;
if(ch==0)
exit(0);
else if(ch==1)
user.encrypt();
else if(ch==2)
user.decrypt();
else
cerr<<"\nWrong choice";
delay(600);
goto menu;
getch();
}

void load()
{
int t=60;
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|                             |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||                            |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||                           |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||                          |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||                        |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||                       |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||                      |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||                     |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||                    |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||                   |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||                  |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||                 |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||                |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||               |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||              |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||||             |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||||            |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||||||           |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||||||          |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||||||||         |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||||||||        |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||||||||||       |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||||||||||      |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||||||||||||     |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||||||||||||    |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||||||||||||||   |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||||||||||||||  |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n||||||||||||||||||||||||||||| |";
cout<<"\n-------------------------------";
cout<<"\nloading....";
cout<<"\n";
delay(t);
clrscr();
cout<<"\n\tWelcome\n\tMade by: Vishnu";
cout<<"\n-------------------------------";
cout<<"\n|||||||||||||||||||||||||||||||";
cout<<"\n-------------------------------";
cout<<"\nloading completed";
delay(600);
clrscr();
delay(600);
}

void check(int k)
{
char password[30];
int ascii[30];
if(k==1)
{
cout<<"\nEnter password\n";
cin>>password;
clrscr();
if(strcmp(password,"password")!=0)
{
cerr<<"\nWrong password";
cerr<<"\nExiting.....";
delay(60*20);
exit(-1);
}
}
else if(k==47)
{
clrscr();
cout<<"\nRestricted area only for admins";
cout<<"\nEnter your password\n";
cin>>password;
clrscr();
if(strcmp(password,pass)!=0)
{
cerr<<"\nWrong password";
cout<<"\nRestricted area only for admins";
cerr<<"\nExiting.....";
delay(60*20);
exit(-1);
}
}
}
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void help();

using namespace std;

int main()
{
    char cmd[100];
    ofstream input("input.txt",ios::app);
    input.close();
    while(1)
    {
    	system("cls");
    	cout<<"\nEnter help to view help";
    	cout<<"\nEnter command::\n";
        cin.getline(cmd,100);
        if(strcmpi(cmd,"exit")==0)
            exit(0);
        else if(strcmpi(cmd,"help")==0)
        	help();
        else if(strcmpi(cmd,"hack")==0)
        {
            input.open("input.txt",ios::out);
        	input.close();
        	cout<<"\nPress any key to enter data\n";
        	getch();
        	system("notepad.exe input.txt");
            system("Ceaser_H.exe input.txt");
            system("notepad.exe hack.txt");
        }
        else if(strcmpi(cmd,"enc")==0)
        {
        	input.open("input.txt",ios::out);
        	input.close();
        	cout<<"\nPress any key to enter data\n";
        	getch();
        	system("notepad.exe input.txt");
            system("Ceaser_E.exe input.txt");
            system("notepad.exe encrypt.txt");
        }
        else if(strcmpi(cmd,"dec")==0)
        {
            input.open("input.txt",ios::out);
        	input.close();
        	cout<<"\nPress any key to enter data\n";
        	getch();
        	system("notepad.exe input.txt");
            system("Ceaser_D.exe input.txt");
            system("notepad.exe decrypt.txt");
        }
    }
    return 0;
}


void help()
{
	cout<<"\nenc\t:ecncypt";
	cout<<"\ndec\t:decrypt";
	cout<<"\nhack\t:hack";
	cout<<"\nexit\t:exit";
	cout<<"\nhelp\t:help";
	cout<<"\n\nPress any key to continue\n";
	getch();
} 
/* C++ File Handling - This program demonstrates
 * how to handle file in C++. That is, how to
 * write some content to a file and retrieve
 * the content from the file to display it on
 * the screen in C++. */

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
	char rec[80], ch;
	ofstream fout("file.txt", ios::out);
	clrscr();

	cout<<"Enter 4 lines of information: \n";
	for(int i=0; i<4; i++)
	{
		cin.get(rec, 80);
		cin.get(ch);
		fout<<rec<<"\n";
	}
	fout.close();
	ifstream fin("file.txt", ios::in);
	fin.seekg(0);
	cout<<"\n";
	for(i=0; i<4; i++)
	{
		fin.get(rec, 80);
		fin.get(ch);
		cout<<rec<<"\n";
	}
	fin.close();
	getch();
}

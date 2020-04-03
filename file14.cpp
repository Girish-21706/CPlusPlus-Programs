/* C++ File Handling - This is the complete
 * version of the C++ file handling program.
 * This program creates a file (entered by user)
 * and store some content (entered by user).
 * Then display those content (if user want)
 * on the output screen in C++ */


#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
	char rec[80], ch;
	char fname[20];
	int count=0, i;
	char ans='y';
	clrscr();

	cout<<"Enter file name: ";
	cin.get(fname, 20);
	ofstream fout(fname, ios::out);

	if(!fout)
	{
		cout<<"Error in creating the file..!!\n";
		cout<<"Press any key to exit...\n";
		getch();
		exit(1);
	}
	cin.get(ch);

	cout<<"Enter information to store..\n";
	while(ans=='y' || ans=='Y')
	{
		cin.get(rec, 80);
		fout<<rec<<"\n";
		cout<<"Want to enter more ? (y/n).. ";
		cin>>ans;
		count++;
		cin.get(ch);
	}
	cout<<"\nThe information successfully stored in the file..!!\n";
	fout.close();

	cin.get(ch);
	cout<<"Want to see ? (y/n)..";
	cin>>ans;

	if(ans=='y' || ans=='Y')
	{
		ifstream fin(fname, ios::in);
		if(!fin)
		{
			cout<<"Error in opening the file..!!\n";
			cout<<"Press any key to exit..\n";
			getch();
			exit(2);
		}
		fin.seekg(0);
		cout<<"\n";

		cout<<"The file contains:\n";
		for(i=0; i<count; i++)
		{
			fin.get(rec, 80);
			fin.get(ch);
			cout<<rec<<"\n";
		}
		fin.close();
	}

	getch();
}

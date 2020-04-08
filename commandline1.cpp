#include<iostream.h>
#include<conio.h>

void main(int argc, char* argv[])
{
int i;
clrscr();
cout<<"Total number of arguments: "<<argc;
for(i=0;i< argc;i++)
{
cout<<endl<< i;<<"argument: "<<argv[i];
getch();
}
}

//using library
#include<iostream>
void fstrcat()
{
char a[30],b[15],*x,*y;
	cout<<"\n Enter the first string ";
	cin>>a;
	cout<<"\n Enter the second string ";
	cin>>b;
	y=b;
	x=a;
	while(*x!='\0')
	m++;
	while(*y!='\0')
	{	 *x=*y;
	     x++;
	     y++;
	     if (*y=='\0')
	     *x='\0';
	     }
	 x=a;
	 cout<<"\n Resulting string is ";
	 while(*x!='\0')
	 {cout<<*x;
		 x++;}
	 
}
int main()
{
	fstrcat();
	cout<<"\n";
	return 0;
}

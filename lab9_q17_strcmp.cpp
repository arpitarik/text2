//using the library
#include<iostream>
using namespace std;
int fstrlen(char a[])
{ 
char *p;
int i=0;
p=a;
while(*p!='\0')
{i++;p++;}
return i;
}
int fstrcmp()
{
char a[30],b[15];
cout<<"\n Enter the first string ";
cin>>a;
cout<<"\n Enter the second string ";
cin>>b;
if (fstrlen(a)==fstrlen(b))
{   char *x,*p;
x=a;p=b;
while(*x!='\0')
{
if (*x!=*p)
{return 0;}
x++;p++;
}
return 1;
}	
else 
return 0;			
}
int main()
{
int k;
k=fstrcmp();
if (k==1)
cout<<"\n Both the strings are equal";
else 
cout<<" \n Unequal strings";
cout<<endl;
return 0;
}

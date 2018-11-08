#include<iostream>
using namespace std;
void fstrcpy()
{ 
char a[20],*n,*m,ca[20];
cout<<"\n Enter a String ";
cin>>a;
m=a;n=ca;
while(*m!='\0')
{
*n=*m;
n++;
m++;
if (*m=='\0')
*n='\0';
}
cout<<"\nprinting copied string \n"; 
n=ca;
while(*n!='\0')
{cout<<*n;n++;}
}
int main()
{ 
fstrcpy();
cout<<"\n";
return 0;
}

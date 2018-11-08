//using the library
#include<iostream>
using namespace std;
int fstrchr(char a[],char b)
{
char *p;int n=0;
p=a;
while(*p!='\0')
{
if(*p==b)
n++;
p++;
}
return n;
}
int main()
{
char a[15],b;
int k;
cout<<"\n Enter your string ";
cin>>a;
cout<<"\n Enter the character you want to search ";
cin>>b;
k=fstrchr(a,b);
cout<<"\n no of times "<<c<<" repeats in the string = "<<k;
return 0;
}

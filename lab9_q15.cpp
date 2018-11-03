//using library
#include<iostream>
using namespace std;
//using main function
int main()
{
char a[20],*p,*m;
cout<<"\n enter a string";
cin>>a;
m=a;
while(*m!='\0')
{
p=m;
while(*p!='\0'){
cout<<" "<<*p;
p++;
}
cout<<endl;
m++;
}
return 0;
}

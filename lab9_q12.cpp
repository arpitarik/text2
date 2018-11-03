//using the library
#include<iostream>
using namespace std;
//using main function
int main()
{
int a,b,*p;
//intialise the pointer as null value
p=0;
//declaring values for a and b
a=2;
b=3;
cout<<"\n printing initial values";
cout<<"\na="<<a<<" b="<<b;
//pointer is pointed to a
p=&a;
//value stored to b
b=*p;
//final value
cout<<"\n printing final values";
cout<<"\na="<<a<<"b="<<b<<endl;
return 0;
}

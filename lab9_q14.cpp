//using the library
#include<iostream>
using namespace std;
//using main function
int main()
{
//declaring char string and pointer
char name[14]={'a','b','c','d','e','k',' ','f',' ','g','h','i','j'};
char *p;
cout<<"\n printing the array elements using normal index method\n";
for(int i=0;name[i]!='\0';i++)
//final elemwent of the character array is always \0
cout<<" "<<name[i];
cout<<"\n printing array elements using pointer method\n";
p=name;
for(int i=0;*p!='0';i++)
//final element of the character array is always \0
{
cout<<" "<<*p;
p++;
}
cout<<"\n";
return 0;
}

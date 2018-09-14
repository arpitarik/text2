//using library
#include<iostream>
using namespace std;
int main(){
int a;
cout << "enter number of rows for pattern" << endl;
cin >> a;
for(int i=0; i<a; i++)
{
//for initial space
for(int b=(a-i-1); b>0; b--)
{
cout <<" ";
}
//for first row star
for(int c=0;c<1;c++)
{
cout << "*";
}
//for middle part
if (i==(a-1))
//for star
{
for(int b=0;b<(a*2-3);b++)
{
cout <<"*";
}
}
//for space
else
{
for(int j=1; j<(2*i);j++)
{
cout <<" ";
}
}
//for last row star
if (i>0)
{
for(int c=0;c<1;c++)
{
cout << "*";
}
}
cout << endl;
}
}



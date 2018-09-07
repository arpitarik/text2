#include<iostream>
using namespace std;
int main(){
int A;
cout << "Enter the number of series for pattern" << endl;
cin >> A;
//using loop for number of lines
for(int i=0; i < A; i++)
{
//print star
for(int a=0; a < 1; a++)
{
cout << "*";
}
//print star or space
if(i==0 or i==(A-1))
{
for(int b=0; b< (A-2); b++)
cout << "*";
}
else
{
for(int c=0; c<(A-2); c++)
cout << " ";
}
//print star
for(int a=0;a < 1; a++)
{
cout << "*";
}
cout << endl;
}
return 0;
}

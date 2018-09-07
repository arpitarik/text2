#include<iostream>
using namespace std;
int main(){
int A,a,b;
//variable declaration
cout << "Enter the number of series for pattern" << endl;
cin >> A;
for( a = 0; a < A; a++)
//using loop for number of lines
{
for(b = 0; b < A; b++)
//using loop for numer of * in a line
{cout << "*";
}
cout << endl;
}
return 0;
}

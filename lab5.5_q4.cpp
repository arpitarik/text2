//using library
#include <iostream>
using namespace std;
int main(){
int q;
cout << "enter the odd number of series for pattern" << endl;
cin >> q;
//loop for number of lines
for(int i=0; i<q; i++)
{
//printing spaces
for(int r=0; r< (2*i); r++)
{
cout << " ";
}
//printing star
for(int p=0; p<1; p++)
{
cout << "*";
}
//print star or space
if (i==0 || i==(q-1))
{
for(int b=0; b<(q-2);b++)
cout << "*";
}
else
{
for(int a=0; a<(q-2);a++)
cout << " ";
}
//print star
for(int p=0;p<1;p++)
{
cout << "*";
}
cout << endl;
}
return 0;
}




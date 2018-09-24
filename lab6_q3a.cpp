//using library
#include<iostream>
using namespace std;
//function for finding the maximum
int max(int vr1, int vr2)
{
//declaration of variables
int big;
//check which variable is bigger
if (vr1>vr2)
{big=vr1;}
else
{big=vr2;}
//returning the bigger variable
return big;
}
//using main function
int main()
{
//declaration of two variables
int c,d;
//asking for the two numbers
cout <<"enter the numbers" << endl;
//taking input
cin >> a >> b;
//calling the maximum function and output it in same line
cout <<"the bigger of the two numbers is" max(c,d);
return 0;
}

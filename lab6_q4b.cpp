//using library
#include<iostream>
using namespace std;
//the minimum function
void mining(int&min ,int vr1, int vr2)
{
//check which variable is small
if(vr1<vr2)
//put the smaller variable into reference variable
{min=vr1;}
else
{min=vr2;}
}
//using main function
int main()
{
//declaration of variables
int min,a,b;
//asking for input
cout <<"enter the numbers" << endl;
//taking input
cin >> a >> b;
//calling the minimum function
mining(min,a,b);
//output
cout <<"the smaller of the two number is" <<min;
return 0;
}

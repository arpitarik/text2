//using library
#include<iostream>
using namespace std;
//the minimum function
int min(int vr1, int vr2)
{
//declaration of variables
int small;
//checking which variable is small
if(vr1<vr2)
{small=vr1;}
else
{small=vr2;}
return small;
}
//the main function
int main()
{
//declaration of variables
int a,b;
//asking for input
cout <<"enter the numbers" <<endl;
//taking input
cin >> a >> b;
//output
cout <<"the smaller of the two number is" <<min(a,b);
return 0;
}

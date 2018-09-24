//using library
#include<iostream>
using namespace std;
//the maximum function
void maxing(int&max,int vr1,int vr2)
{
//find the bigger number
if(vr1>vr2)
//put the bigger variable into function
{max=vr1;}
else
{max=vr2;}
}
//using main function
int main()
{
//declaration of variables
int max,a,b;
//ask for input
cout <<"enter the numbers" << endl;
//taking input
cin >> a >> b;
//call maximum function and giving maximum as reference variable
maxing(max,a,b);
//output
cout <<"the bigger of the two number is" << max;
return 0;
}

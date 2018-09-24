//using library
#include<iostream>
using namespace std;
//the summing function
int summing(int&sum, int vr1, int vr2)
{
//add and put the value into reference function
sum=vr1+vr2;
}
//the maximum function
void maxing(int&max, int vr1, int vr2)
{
//find the big number
if(vr1>vr2)
//put the big variable into reference variable
{max=vr1;}
else
{max=vr2;}
}
//the minimum function
void mining(int&min, int vr1, int vr2)
{
//check which variable is small
if(vr1<vr2)
//put the small variable into reference variable
{min=vr1;}
else
{min=vr2;}
}
//using the main function
int main()
{
//declaration of variables
int m,n,o,p;
//ask for input
cout <<"enter the two numbers";
//take as input
cin >> m;
cin >> n;
//ask what to do with the numbers
cout <<"enter 1 for finding the smaller of the two, 2 for finding the larger of the two and 3 for adding them";
cin >> o;
if(o==1)
{
mining(p,m,n);
cout <<"the smaller number is" << p << endl;
}
else if(o==2)
{
maxing(p,m,n);
cout <<"the larger number is" << p << endl;
}
else if(o==3)
{
summing(p,m,n);
cout <<"the sum is" << p << endl;
}
else
{cout <<"invalid input";}
}


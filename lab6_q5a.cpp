//using library
#include<iostream>
using namespace std;
//the minimum function
int min(int vr1, int vr2)
{
//declaration of variables
int small;
//check which variable is small
if(vr1<vr2)
{small=vr1;}
else
{small=vr2;}
return small;
}
int max(int vr1, int vr2)
{
//declaration of variables
int big;
//check which variable is big
if(vr1>vr2)
{big=vr1;}
else
{big=vr2;}
//return the big variable
return big;
}
//adding function
int summing(int vr1, int vr2)
{
//returning the sum
return (vr1+vr2);
}
//using main function
int main()
{
//declaration of variables
int x,y,z;
//ask for input
cout <<"enter the two numbers";
//take as input
cin >> x;
cin >> y;
//ask what to do with the numbers
cout <<"enter 1 for finding the smaller of the two, 2 for finding the larger of the two and 3 for adding them";
cin >> z;
if(c==1)
{cout <<"the smaller number is" << min(x,y) << endl;}
else if(c==2)
{cout <<"the larger number is" << max(x,y) << endl;}
else if(c==3)
{cout <<"the sum is" << summing(x,y) << endl;}
else
{cout <<"invalid input";}
} 

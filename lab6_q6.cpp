//using library
#include<iostream>
using namespace std;
int sumevennumbers(int a, int b)
{
//declaration of variables
int c=0;
//check if the number is odd then add 1 or else not
if(a%2!=0)
{a+=1;}
//using loop
for(;a<b;)
{
//add the number to final output
c+=a;
a+=2;
}
//return c
return c;
}
int sumoddnumbers(int a, int b)
{
//declaration of the final output
int c=0;
//check if the number is odd or even
if(a%2==0)
{a+=1;}
for(;a<b;)
{
c+=a;
a+=2;
}
return c;
}
int sumsquareoddnumbers(int a, int b)
{
int c=0;
// check if the input is odd or even
if(a%2==0)
{a+=1;}
for(;a<b;)
{
c= c + (a*a);
a+=2;
}
return c;
}
int sumsquareevennumbers(int a, int b)
{
int c=0;
//check if the input is odd or even
if(a%2!=0)
{a+=1;}
for(;a<b;)
{
c= c + (a*a);
a+=2;
}
return c;
}
int main()
{
int x,y,z;
//ask input
cout <<"enter the starting value";
//take as input
cin >> x;
//ask for input
cout <<"enter the ending value";
//take as input
cin >> y;
cout <<endl<<"the sum of all odd numbers between the numbers is" <<sumoddnumbers(x,y)<<endl;
cout <<"the sum of all even numbers between the numbers is" <<sumevennumbers(x,y)<<endl;
cout <<"the sum of all odd number's square between the number is" <<sumsquareoddnumbers(x,y)<<endl;
cout <<"the sum of all even number's square between the number is"<<sumsquareevennumbers(x,y)<<endl;
return 0;
}


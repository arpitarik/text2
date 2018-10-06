//using library
#include<iostream>
using namespace std;
//declaring recursive function
int rev(int i)
{
//using loop terminator
if(i==0)
{}
//loop running
else
{
//ending term found by % operator
cout<<i%10;
//number before the ending term
i=(i/10);
//calling the recursive function
rev(i);
return 0;
}
return 0;
}
//using main function
int main(){
//asking input
int a;
cout<<"\n enter a number for palindrome";
cin>>a;
//calling the recursive function
rev(a);
return 0;
}


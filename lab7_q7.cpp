//using the library
#include<iostream>
using namespace std;
//declaring and defining the recursive function
int rev(int i,int j,int s)
{
//terminating loop
if(j==0)
{if(s==i)
{cout<<"\n number is a palindrome";
return 0;}
else
{cout<<"\n number is not a palindrome";
return 0;
}
}
//running loop
else{
//reverse number
s=(s*10)+(j%10);
j=(j/10);
//calling recursive
rev(i,j,s);
return 0;
}
}
//using main function
int main(){
//asking input from user
int a;
cout<<"\n enter any number";
cin>>a;
//calling the recursive function
rev(a,a,0);
return 0;
}


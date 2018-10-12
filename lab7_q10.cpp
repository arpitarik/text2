//using the library
#include<iostream>
using namespace std;
//declaring and defining of the recursive function
int fibo(int i,int j=1,int s=1,int s1=0){
//terminating loop
if(j==i)
{
cout<<"the"<<i<<"th term of the fibonacci series is"<<s;}
else{
//fibonacci logic
int t=s;
s+=s1;
s1=t;
j++;
//recursive call
fibo(i,j,s,s1);
return 0;
}
return 0;
}
//using main function
int main(){
//asking user for input
int a;
cout<<"\n program to find nth term of the fibonacci series";
cout<<"\n enter n";
cin>>a;
//calling recursive function
fibo(a);
return 0;
}




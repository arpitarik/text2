//using the library
#include<iostream>
using namespace std;
//declaring and defining of the recursive function
int findfac(int d,int e,int f)
{
//terminating loop
if(e>d){
cout<<"factorial of the given number ="<<f<<endl;
}
else{
//multiplying each element to prvious product
f*=e;
//increment
e++;
//calling recursive
findfac(d,e,f);
return 0;
}
return 0;
}
//using main function
int main(){
//asking user for input
int a;
cout<<"\n enter any number";
cin>>a;
//calling recursive function
findfac(a,1,1);
return 0;
}


//using library
#include<iostream>
using namespace std;
//declaring recursive function 
int print(int u, int v, int w=1, int x=1)
{
//condition termination given by if statement
if(w>v)
{
cout<<u<<"to the power"<<v<<"="<<x;
}
//using loop
else
{
x*=u;
w++;
print(u,v,w,x);
}
return 0;
}
//using main function
int main(){
//asking for input to the user
int u,v;
cout<<"\n program to find u to the power v";
cout<<"\n enter u,v";
cin>>u>>v;
//calling recursive function
print(u,v);
return 0;
}


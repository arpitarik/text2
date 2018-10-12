//using the library
#include<iostream>
using namespace std;
//declaring and defining of the recursive function
int sumdig(int a, int b){
//terminating loop
if(a==0)
{
cout<<"sum of digits="<<b;
return 0;
}
else{
//summing digits from the last
b+=(a%10);
a=(a/10);
//recursive call
sumdig(a,b);
return 0;
}
}
//using main function
int main(){
//asking input from user
int c;
cout<<"\n enter any number";
cin>>c;
//calling the recursive function
sumdig(c,0);
return 0;
}



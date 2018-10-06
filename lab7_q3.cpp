//using the library
#include<iostream>
using namespace std;

int print (int a, int b)
{
if (b>a)
return 0;
else
{
cout<<b<<endl;
b=b+2;
print(a,b);
return 0;
}
}

int main(){
int a;
cout<<"enter a" <<endl;
cin>>a;
print(a,2);
return 0;
}



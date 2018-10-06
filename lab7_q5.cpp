//using the library
#include<iostream>
using namespace std;

int print(int x, int y, int z)
{
if(y>x)
{
cout<<" sum of all odd numbers is" <<z<<endl;
return 0;
}

else
{
z=z+y;
y=y+2;

print(x,y,z);
}
return 0;
}

int main(){
int x;
cout<<"enter a number x"<<endl;
cin>>x;

print(x,1,0);
return 0;
}






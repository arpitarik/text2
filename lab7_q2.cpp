//using the library
#include<iostream>
using namespace std;
int print(int x, int y)
{
if(y>x)
return 0;
else
{
cout<<y<<endl;
y++;
print(x,y);
return 0;
}
}

int main(){
int x;
cout<< "enter x";
cin>>x;

print(x,1);
return 0;
}



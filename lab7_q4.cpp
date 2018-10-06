//using the library
#include<iostream>
using namespace std;

int print(int m, int n, int p)
{
if (n>m)
{
cout<<" sum is" <<p;
return 0;
}
else
{
p=p+n;
n++;

print(m,n,p);
return 0;
}
}

int main(){
int m;
cin>>m;
print(m,1,0);
return 0;
}





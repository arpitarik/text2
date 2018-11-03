//using the library
#include<iostream>
using namespace std;
int main()
{
int i,*i1;char a,*a1;float b,*b1;double c,*c1;bool d,*d1;
i=1;a='a';b=3.1415;c=3.141592;d=0;
i1=&i;
a1=&a;
b1=&b;
c1=&c;
d1=&d;
cout<<"\n sizes character variable and pointer"<<sizeof(a)<<" "<<sizeof(a1);
cout<<"\n sizes integer variable and pointer"<<sizeof(i)<<" "<<sizeof(i1);
cout<<"\n sizes floating point variable and pointer"<<sizeof(b)<<" "<<sizeof(b1);
cout<<"\n sizes double variable and pointer"<<sizeof(c)<<" "<<sizeof(c1);
cout<<"\n sizes bool variable and pointer"<<sizeof(d)<<" "<<sizeof(d1);
cout<<"\n";
return 0;
}

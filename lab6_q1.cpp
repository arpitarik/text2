//using library
#include<iostream>
using namespace std;
//function for recieving unitCst,units and tax rate and returns to the calling module the salestax and totdue
int value(int &unitCst, int &unit, int &taxRt)
{
cout <<"give a value for the unit cost"<<endl;
cin >> unitCst;
cout <<"give a value for the unit purchase"<<endl;
cin >> unit;
cout <<"give a value for the total due"<<endl;
cin >> taxRt;
//return values
cout <<"the unit cost is" <<unitCst <<endl;
cout <<"the unit purchase is" <<unit <<endl;
cout <<"the tax rate is" <<taxRt <<endl;
}
//function for recieving unitCst,units and tax rate and returns to the calling module the salestax and totdue
int calculation(int unitCst, int unit, int taxRt, int &salesTx, int &totdue)
{
value(unitCst,unit,taxRt);
salesTx=(unitCst*unit*taxRt);
totdue=(unitCst*unit)+salesTx;
}
//function for recieving unitCst,units and tax rate and returns to the calling module the salestax and totdue
//using main function
int main()
{
//declaration of variables
int unitCst,unit,taxRt,salesTx,totdue;
calculation(unitCst,unit,taxRt,salesTx,totdue);
//give values
cout <<"the sales tax is"<< salesTx<<" and "<<"the total due is"<<totdue"."
//calling functions
<<endl;
return0;
}



//include library
#include<iostream>
using namespace std;
//using main function
int main(){
//declaring variables
float km,cm,mm;
//enter value
cout << "Enter length in centimeter";
cin >> km;
//calculation
cm = (km/100);
mm = (km/100000);
//print the result
cout << "length in meter is = " << cm << endl;
cout << "length in kilometer is = " << mm << endl;
return 0;
}

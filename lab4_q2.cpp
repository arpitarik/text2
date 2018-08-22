//include library
#include<iostream>
using namespace std;
//using main function
int main(){
//declaring variables
float cel,fah;
//enter values
cout << "Enter temperature in degree celsius = ";
cin >> cel;
//calculation
fah=((cel*9/5) + 32);
cout << "Temperature in fahrenheit is = " << fah << endl;
return 0;
}

//using library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float celcius,fahrenheit;
//enter values
cout << "Enter temperature in degree fahrenheit = ";
cin >> fahrenheit;
//calculation
celcius = (fahrenheit- 32)*5/9;
cout << "temperature in fahrenheit is =" << celcius << endl;
return 0;
}


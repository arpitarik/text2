//using library
#include<iostream>
using namespace std;
//function for converting lowercase to uppercase
char toUpper(char small)
{
//converting to uppercase
small-=32;
//return uppercase
return small;
}
//function for converting uppercase to lowercase
char toLower(char big)
{
//converting to lowercase
big+=32;
//return lowercase
return big;
}
//using main function
int main()
{
//declaration of variables
char character;
//ask for input
cout <<"enter the character" << endl;
//take as input
cin >> character;
//check if the character is in uppercase
if(character>=65 && character<=90)
{
//take the toLower function and find the output
cout<<toLower(character)<<endl;
}
//check if the character is in lowercase
else if(character>=97 && character<=122)
{
//take the upper function and find the output
cout<<toUpper(character)<<endl;
}
//if the character is not a variable
else
{
cout <<"your character is not an alphabet"<< endl;
}
return 0;
}

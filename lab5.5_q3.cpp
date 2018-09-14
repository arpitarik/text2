//using library
#include <iostream>
using namespace std;
int main(){
	int x;
	cout << "enter the odd number of series for pattern" <<endl;
	cin >> x;
	//loop for number of lines
	for( int i=0; i<x; i++ )
	{
		//for line
		for (int y=0; y<x; y++ )
		{
			//star 	in the same pattern
			if ( i==0 || y==0 || i==(x-1) || y==(x-1) || i==y || y==(x-i-1)	)
			cout << "*";
			else
			cout << " ";
		}
		cout << endl;
	}
}


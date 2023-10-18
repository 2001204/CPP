#include<iostream>
using namespace std;

#include"../include/Complex"
using namespace nutil;

int main( void ){
	Complex c1;
	cin >> c1;	//operator>>( cin, c1 )

	c1.setReal( c1.getReal() + 5 );
	c1.setImag( c1.getImag() + 5 );

	cout << c1;	//operator<<( cout, c1 );
	return 0;
}

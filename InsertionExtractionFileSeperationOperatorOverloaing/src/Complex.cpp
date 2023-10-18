#include<iostream>
using namespace std;

#include"../include/Complex"
using namespace nutil;
Complex::Complex( void ) : real( 0 ), imag( 0 ){
}
Complex::Complex( int real, int imag ) : real( real ), imag( imag ){
}
int Complex::getReal( void )const{
	return this->real;
}
void Complex::setReal( const int real ){
	this->real = real;
}
int Complex::getImag( void )const{
	return this->imag;
}
void Complex::setImag( const int imag ){
	this->imag = imag;
}
istream& nutil::operator>>( istream &cin, Complex &other ){
	cout << "Enter real number	:	";
	cin >> other.real;
	cout << "Enter imag number	:	";
	cin >> other.imag;
	return cin;
}
ostream& nutil::operator<<( ostream &cout, const Complex &other ){
	cout << "Real Number	:	"<< other.real <<endl;
	cout << "Imag Number	:	"<< other.imag <<endl;
	return cout;
}

#include<iostream>
using namespace std;
class complex{
private:
	int real;
	int imag;
public:
	void setreal( int real ){
		this->real = real;
	}
	void setimag( int imag){
		this->imag = imag;
	}
	int getreal( void ){
		return this->real;
	}
	int getimag( void ){
		return this->imag;
	}
};

int main( void ){
	complex c1;
	c1.setreal( 10 );
	c1.setimag( 20 );
	cout <<"Real Number	:	" << c1.getreal( ) << endl;
	cout <<"Imag Number	:	" << c1.getimag( ) << endl;
	return 0;
}

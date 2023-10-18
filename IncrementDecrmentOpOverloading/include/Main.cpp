#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex( void ){
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag ){
		this->real = real;
		this->imag = imag;
	}
	//Complex *const this = &c1;
	Complex operator++( void ){	//Pre-Increment
		Complex temp;
		temp.real = ++ this->real;
		temp.imag = ++ this->imag;
		return temp;
	}
	Complex operator++( int ){	//Post-Increment
		Complex temp;
		temp.real = this->real ++;
		temp.imag = this->imag ++;
		return temp;
	}
	void printRecord( void ){
		cout << "Real Number	:	" << this->real <<endl;
		cout << "Imag Number	:	" << this->imag <<endl;
		cout<<endl;
	}
};

int main( void ){
	Complex c1( 10, 20 );
	Complex c2 =  c1 ++;	//c2 = c1.operator++( 0 );
	//Complex c2 =  c1 --;	//c2 = c1.operator--( 0 );
	c1.printRecord( );	//11,21
	c2.printRecord( );	//10,20

	return 0;
}
int main1( void ){
	Complex c1( 10, 20 );
	Complex c2 = ++ c1;	// c2 = c1.operator++( );
	//Complex c2 = -- c1;	// c2 = c1.operator--( );

	c1.printRecord( );	//11,21
	c2.printRecord( );	//11,21

	return 0;
}

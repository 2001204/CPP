#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	//Complex *const this;
	void acceptRecord( void ){
		cout << "Real Number	:	";
		cin >> this->real;

		cout << "Imag Number	:	";
		cin >> this->imag;
	}
	//Complex *const this = &c1
	//Complex other = c2
	Complex sum( Complex other ){
		Complex result;
		result.real = this->real + other.real;
		result.imag = this->imag + other.imag;
		return result;
	}

	//Complex *const this = &c1
	//Complex other = c2
	Complex sum( Complex *ptr ){
		Complex result;
		result.real = this->real + ptr->real;
		result.imag = this->imag + ptr->imag;
		return result;
	}
	//Complex *const this;
	void printRecord( void ){
		cout << "Real Number	:	" << this->real << endl;
		cout << "Imag Number	:	" << this->imag << endl;
	}
};
int main( void ){
	Complex c1;
	c1.acceptRecord( );	//10,20

	Complex c2;
	c2.acceptRecord( );	//30,40

	Complex c3;
	//c3 = c1.sum( c2 );
	c3 = c1.sum( &c2 );

	c3.printRecord( );	//40,60
	return 0;
}


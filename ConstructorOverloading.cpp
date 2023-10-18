#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex( void ){
		cout<< "Complex( void )" << endl;
		this->real =0;
		this->imag =0;
	}
	Complex( int value ){
		cout<<"complex(int value)"<<endl;
		this->real = value;
		this->imag = value;
	}
	Complex( int real, int imag){
		cout<<"complex(int real, int imag)"<<endl;
		this->real = real;
		this->imag = imag;
	}
	void printRecord( void ){
		cout<<"Real number : "<<this->real<<endl;
		cout<<"Imag number : "<<this->imag<<endl;
	}
};
int main( void ){
	Complex c1;         //default constructor
	c1.printRecord();

	Complex c2( 50 );    //complex(int value)
  	c2.printRecord();

  	Complex c3( 10, 20 ); //complex(int real, int imag)
  	c3.printRecord();

  	//Complex c4();       //empty parenthesis interpreted as function declaration
  	//c4.printRecord();    // here constuctor will not s

  	Complex c5 = 40;    // ==> Complex( int value )
  	c2.printRecord();

    Complex ( 50, 60);
    Complex ( 50, 60) .printRecord();

    //Complex c6 = 70,80;  //Complex c6( 70 ), 80;	//Compiler error

    Complex c8 = {80,20};
    c8.printRecord();
	return 0;

}

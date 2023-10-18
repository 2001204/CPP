#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:                                            ///* int n1, int n2*/
	void acceptrecord( Complex *const, int n1, int n2){
	cout << "Real Number : ";
	cin >> this->real;

	cout<< "Imaginary Number : ";
	cin >> this->imag;
}
	void printrecord(){
		cout << "Real Number:"<< this->real;
		cout << "Imaginary Number :"<< this->imag ;
		cout << "\nComplex Number: "<< this->real << "+ i"<< this->imag;

	}
};

int main( void ){
	Complex c1;
	//c1.acceptrecord(10,20);
	//c1.acceptrecord(&c1);
	c1.acceptrecord(&c1,10,20);
	c1.printrecord();
	return 0;
}



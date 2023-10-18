#include<iostream>
#include<string>
using namespace std;

namespace exception{
	class IllegalArgumentException{
	private:
		const string message;
	public:
		IllegalArgumentException( string message = "Invalid argument" );

		string getMessage( void )const;
	};
}
using namespace exception;
IllegalArgumentException::IllegalArgumentException( string message ) : message ( message ){
}
string IllegalArgumentException::getMessage( void )const{
	return this->message;
}

namespace nutil{
	class Complex{
	private:
		int real;
		int imag;
	public:
		Complex( int real = 0, int imag  = 0 )throw( IllegalArgumentException );

		int getReal( void )const throw( );

		void setReal( const int real )throw( IllegalArgumentException );

		int getImag( void )const throw( );

		void setImag( const int imag )throw( IllegalArgumentException );
	};
}
using namespace nutil;
Complex::Complex( int real, int imag )throw( IllegalArgumentException ){
	this->setReal( real );
	this->setImag( imag );
}

int Complex::getReal( void )const throw( ){
	return this->real;
}
void Complex::setReal( const int real )throw( IllegalArgumentException ){
	if( real < 0 )
		throw IllegalArgumentException("Invalid real number");
	this->real = real;
}
int Complex::getImag( void )const throw( ){
	return this->imag;
}
void Complex::setImag( const int imag )throw( IllegalArgumentException ){
	if( imag < 0 )
		throw IllegalArgumentException("Invalid imag number");
	this->imag = imag;
}
void accept_record( Complex &c1 )throw( IllegalArgumentException ){
	int real;
	cout << "Enter real number	:	";
	cin >> real;
	c1.setReal( real );

	int imag;
	cout << "Enter imag number	:	";
	cin >> imag;
	c1.setImag( imag );
}
void print_record( const Complex &c1 )throw( ){
	cout << "Real Number	:	" << c1.getReal( ) <<endl;
	cout << "Imag Number	:	" << c1.getImag( ) <<endl;
}
int menu_list( ){
	int choice;
	cout << "0.Exit." <<endl;
	cout << "1.Accept Record." <<endl;
	cout << "2.Print Record." <<endl;
	cout << "Enter choice	:	";
	cin >> choice;
	return choice;
}
int main( void ){
	int choice;
	Complex c1;
	while( ( choice = ::menu_list( ) ) != 0 ){
		try{
			switch( choice ){
			case 1:
				::accept_record( c1 );
				break;
			case 2:
				::print_record( c1 );
				break;
			}
		}catch( IllegalArgumentException &ex ){
			cout << ex.getMessage( ) << endl;
		}
	}
	return 0;
}

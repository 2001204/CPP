#include<iostream>
using namespace std;

class time{
private:
	int hours;
	int minutes;
	int seconds;
public:
	time( void ) : hours( 0 ), minutes( 0 ), seconds( 0 ){
	}
	time( int hours, int minutes, int seconds ) : hours( hours ), minutes( minutes ), seconds(seconds){
	}
	int gethours( void ){
		return this->hours;
	}
	void sethours( int hours ){
		this->hours =hours;
	}
	int getminutes( void ){
		return this->minutes;
	}
	void setminutes( int minutes){
		this->minutes = minutes;
	}
	int getseconds( void ){
		return this->seconds;
	}
	void setseconds( int seconds){
		this->seconds = seconds;
	}
	/*
	void operator()( int real, int imag ) {
		this->real = real;
		this->imag = imag;
	}*/
	friend istream & operator>>( istream &cin, time &other ){
		cin >> other.hours;
		cin >> other.minutes;
		cin >> other.seconds;
		return cin;
	}
	friend ostream& operator<<( ostream &cout, time &other ){
		cout << "hours	:	"<< other.hours <<endl;
		cout << "minutes	:	"<< other.minutes<<endl;
		cout << "minutes	:	"<< other.seconds<<endl;
		return cout;
	}
};

int main( void){
	time a1;
	cin>> a1;
	a1.sethours(a1.gethours()+5);
	a1.setminutes(a1.getminutes());
	a1.setseconds(a1.getseconds());
	cout<< a1;
	return 0;
}

/*
int main1( void ){
	Complex c1;

	c1( 10, 20 );	//c1. operator()( 10, 20 );

	cout << c1;	//operator<<( cout, c1 );
	return 0;
}
int main( void ){
	Complex c1;

	cin >> c1;	//operator>>( cin, c1 )

	c1.setReal( c1.getReal() + 5 );
	c1.setImag( c1.getImag() + 5 );

	cout << c1;	//operator<<( cout, c1 );
	return 0;
}
*/

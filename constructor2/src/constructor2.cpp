#include<iostream>
using namespace std;
class test{
private:
	int number;
public:
	test ( void ): number( 10)
	{
		this->number = 20;
	}
	void showrecord( void ){
	this->number = this->number + 4;
	cout<<"Number : "<<this->number<< endl;

	}
	void displayrecord( void ){
	this->number = this->number + 2;
	cout<<"Number : "<<this->number<< endl;
	}
};

int main( void ){
    test t;
    cout<< sizeof(t)<<endl;

    t.showrecord( );
    t.displayrecord( );
    t.displayrecord( );
    t.showrecord( );

	return 0;
}

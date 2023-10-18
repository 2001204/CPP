#include<iostream>
using namespace std;

class Test{
private:
	int num1;
	int num2;
	int num3;
public:
		Test( void );
		Test( int num1, int num2 ) ;
		void showrecord( void );


	Test( void ) : num1( 10 ), num2( 20 ),num3( 30 ){
               //default constructor
	}

	Test( int num1, int num2, int num3) : num1(num1), num2(num2), num3(num3){
               //parameterised constuctor
	}
	void printrecord( void ){
		cout<<"Num1 : "<<this->num1<<endl;
		cout<<"Num2 : "<<this->num2<<endl;
		cout<<"Num3 : "<<this->num3<<endl;
	}

};

Test::Test( void ){
      //default constructor defined outside th eclass using scope resolution operator.
}
Test::Test( int num1, int num2 ) {

}
void Test::showrecord( void ){

}


int main( void ){
	Test t1;
	t1.printrecord();

	Test t2(40,50,60);
	t2.printrecord();
}

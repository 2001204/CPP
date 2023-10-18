#include<iostream>
using namespace std;

#include"../include/ArithmeticException"
using namespace exception;

#include"../include/Calculator"
using namespace util;


void accept_Record( int &number ){
	cout<<"Enter an Number : ";
	cin>> number;
}

void print_Record( int &result){
	cout<<"Result is : "<< result<< endl;
}

int main( void ){
	try{
		int num1;
		accept_Record( num1 );

		int num2;
		accept_Record( num2 );

		int result= calculate( num1, num2);
		print_Record( result );
	}catch ( ArithmeticException &ex){
		cout<< ex.getMessage()<<endl;
	}
	return 0;
}

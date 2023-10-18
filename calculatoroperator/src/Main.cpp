#include<iostream>
using namespace std;

#include "../include/ArithmeticOperation.h"

#include "../include/Calculator.h"

ArithmeticOperation_t menu_list( void ){

	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Sum"<<endl;
	cout<<"2.Sub"<<endl;
	cout<<"3.Mult"<<endl;
	cout<<"4.Div"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	return ArithmeticOperation_t( choice );

}

int main( void ){
	ArithmeticOperation_t choice;
	while((choice= ::menu_list())!=0){
		int result = 0;
		switch( choice ){
		case SUM:
			result = sum(50,10);
			break;
		case SUB:
			result = sub(80,8);
			break;
		case MULT:
			result = mult(12,5);
			break;
		case DIV:
			result = division(30,6);
			break;
		}
		cout<<"Result : "<< result <<endl;
	}
	return 0;
}
}

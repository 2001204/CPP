#include<iostream>
using namespace std;

#include"../include/Rectangle.h"
#include"../include/Circle.h"
int menu_list( void ){
	int choice;
	cout << "0.Exit" << endl;
	cout << "1.Rectangle" << endl;
	cout << "2.Circle" << endl;
	cout << "Enter choice	:	";
	cin >> choice;
	return choice;
}
int main( void ){
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 ){
		Shape *ptr = nullptr;
		switch( choice ){
		case 1:
			ptr = new Rectangle( );	//OK: Upcasting
			break;
		case 2:
			ptr = new Circle( );	//OK: Upcasting
			break;
		}
		if( ptr != nullptr ){
			ptr->acceptRecord( );
			ptr->calculateArea( );
			ptr->printRecord( );
			delete ptr;
		}
	}
	return 0;
}

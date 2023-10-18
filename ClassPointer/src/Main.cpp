#include<iostream>
using namespace std;

class A{
private:
	int num1;
	int num2;
public:
	A( void ){
		this->num1 = 10;
		this->num2 = 20;
	}
	A( int num1, int num2 ){
		this->num1 = num1;
		this->num2 = num2;
	}
	void showRecord( void ){
		cout << "Num1	:	" << this->num1 << endl;
		cout << "Num2	:	" << this->num2 << endl;
	}
	void printRecord( void ){
		cout << "Num1	:	" << this->num1 << endl;
		cout << "Num2	:	" << this->num2 << endl;
	}
};
class B : public A{
private:
	int num3;
public:
	B( void ){
		this->num3 = 30;
	}
	B( int num1, int num2, int num3 ) : A( num1, num2 ){
		this->num3 = num3;
	}
	void printRecord( void ){
		A::printRecord( );
		cout << "Num3	:	" << this->num3 << endl;
	}
	void displayRecord( void ){
		A::showRecord( );
		cout << "Num3	:	" << this->num3 << endl;
	}
};
int main( void ){
	A *ptrBase = new B( );	//Upcasting: OK
	ptrBase->printRecord( );	//A::printRecord( );
	B* ptrDerived = ( B* )ptrBase;	//OK: Downcasting
	ptrDerived->printRecord( );
	delete ptrBase;
	return 0;
}
int main9( void ){
	B *ptrDerived = new B( );
	ptrDerived->printRecord( );	//OK: B::printRecord( );
	//A *ptrBase = ( A* )ptrDerived;	//Upcasting: OK
	A *ptrBase = ptrDerived;	//Upcasting: OK
	ptrBase->printRecord( );	//OK: A::printRecord( );
	delete ptrDerived;
	return 0;
}
int main8( void ){
	B *ptr = new B( );
	//ptr->showRecord( );	//OK: A::showRecord( );
	//ptr->printRecord( );	//OK: B::printRecord( );
	//ptr->A::printRecord( );	//OK: B::printRecord( );
	//ptr->displayRecord( );	//OK: B::displayRecord( );
	delete ptr;
	return 0;
}
int main7( void ){
	A a1( 50, 60 );
	B b1;
	//b1 = a1;	//Not OK:
	b1.printRecord( );
	return 0;
}
int main6( void ){
	B b1( 50, 60, 70 );
	A a1;
	a1 = b1;	//OK: Object Slicing
	a1.printRecord( );	//OK: A::printRecord( )s;	//50, 60
	return 0;
}
int main5( void ){
	B b1( 50, 60, 70 );
	b1.printRecord( );	//OK: B::printRecord( );
	B b2;
	b2 = b1;	//b2.operator=( b1 )
	b2.printRecord( );	//OK: B::printRecord( );
	return 0;
}
int main4( void ){
	A a1( 50, 60 );
	a1.printRecord( );	//OK: A::printRecord( );
	A a2 = a1;	//on a2 copy constructor will call
	a2.printRecord( );	//OK: A::printRecord( );
	return 0;
}
int main3( void ){
	B b;
	//b.showRecord( );		//OK: A::showRecord( );
	//b.printRecord( );		//OK: B::printRecord( );
	//b.A::printRecord( );	//OK: A::printRecord( );
	//b.displayRecord( );		//OK: B::displayRecord( );
	return 0;
}
int main2( void ){
	A *ptr = new A( );
	//ptr->showRecord( );		//OK: A::showRecord( );
	//ptr->printRecord( );		//OK: A::printRecord( );
	//ptr->displayRecord( );	//Not OK:  error: no member named 'displayRecord' in 'A'
	//ptr->B::printRecord( );	//Not OK:  error: 'B::printRecord' is not a member of class 'A'
	delete ptr;
	return 0;
}
int main1( void ){
	A a1;
	//a1.showRecord( );		//OK: A::showRecord( );
	//a1.printRecord( );	//OK: A::printRecord( );
	//a1.displayRecord( );	//Not OK:  error: no member named 'displayRecord' in 'A'
	//a1.B::printRecord( );	//Not OK:  error: 'B::printRecord' is not a member of class 'A'
	return 0;
}

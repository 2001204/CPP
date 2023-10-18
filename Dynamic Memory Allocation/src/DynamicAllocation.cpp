#include<cstdlib>
#include<iostream>
#include<new>

class Test{
public:
	Test( void ){
		cout << "Inside ctor" << endl;
	}
	void print( void ){
		cout <<"Hello print"<<endl;
	}
	~Test( void ){
		cout << "Inside dctor" << endl;
	}
};
int main( void ){
	Test *ptr = ( Test*) malloc( sizeof(Test));	//Dynamic memory allocation for object
	//Test *ptr = new Test( );	//Dynamic memory allocation for object

	ptr->print( );

	free( ptr );	//Dynamic memory deallocation for object
	//delete ptr;	//Dynamic memory deallocation for object
	return 0;
}



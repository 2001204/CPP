#include<iostream>
#include<complex>
#include<stack>
#include<queue>
using namespace std;

int main( void ){
	queue<int> que;
	que.push( 10 );
	que.push( 20 );
	que.push( 30 );

	int element;
	while( !que.empty( ) ){
		element = que.front( );
		cout << "Removed element is	:	" << element << endl;
		que.pop( );
	}
	return 0;
}

int main2( void ){
	stack<int> stk;
	stk.push( 10 );
	stk.push( 20 );
	stk.push( 30 );

	int element;
	while( !stk.empty( ) ){
		element = stk.top( );
		cout << "Removed element is	:	" << element << endl;
		stk.pop( );
	}
	return 0;
}


int main1( void ){
	complex<double> c1;
	c1.real( 10.5 );
	c1.imag( 20.5 );
	cout << "Real Number	:	" << c1.real() <<endl;
	cout << "Imag Number	:	" << c1.imag() <<endl;
	return 0;
}

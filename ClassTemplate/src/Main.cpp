#include<iostream>
#include<string>
using namespace std;

/* template<typename T>	//T: Type Parameter
void swap_object( T &object1, T &object2 ){
	T temp = object1;
	object1 = object2;
	object2 = temp;
} */

template<class T>	//T: Type Parameter
void swap_object( T &object1, T &object2 ){
	T temp = object1;
	object1 = object2;
	object2 = temp;
}

int main( void ){
	char ch1 = 'A';
	char ch2 = 'B';

	swap_object<char>( ch1, ch2 );
	//swap_object( ch1, ch2 );
	//char: Type argument
	//ch1,ch2: function argument

	cout << "ch1	:	" << ch1 << endl;
	cout << "ch2	:	" << ch2 << endl;


	int a = 10;
	int b = 20;

	swap_object<int>( a, b );

	cout << "a	:	" << a << endl;
	cout << "b	:	" << b << endl;


	double x = 10.5;
	double y = 20.5;

	swap_object<double>( x, y );

	cout << "X	:	" << x << endl;
	cout << "Y	:	" << y << endl;


	string s1 = "Kharghar";
	string s2 = "Juhu";

	swap_object<string>( s1, s2 );

	cout << "S1	:	" << s1 << endl;
	cout << "S2	:	" << s2 << endl;

	return 0;
}

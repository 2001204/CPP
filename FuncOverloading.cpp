#include<iostream>
using namespace std;

void print( int num6 ){
	cout << "int : " << num6<< endl ;

}
void print( float num7 ){
	cout << "float : " << num7 << endl ;

}
void print( double num8 ){
	cout << "double : " << num8 << endl ;
}
void sum( int num1, int num2 ){	//__Z3sumii
	int result1 = num1 + num2;
	cout<< result1 << endl;
}
void sum( int num1, int num2, int num3 ){	//__Z3sumiii
	int result2 = num1 + num2 + num3;
	cout<< result2 << endl;
}
void sum( int num1, float num2){	//__Z3sumif
	float result3 = num1 + num2;
	cout<< result3 << endl;
}
void sum( int num1, float num2, double num3 ){	//__Z3sumifd
	double result4 = num1 + num2 + num3;
	cout<< result4 << endl;
}


int main( void ){
	print(10);
	print(15.6f);
	print(14.5);
	//print(10,10.2);
	//print(36,15.3f);
	sum(10,10);
	sum(10,10,10);
	sum(10,15.6f);
	sum(10,15.6f,14.5);
	return 0;
}

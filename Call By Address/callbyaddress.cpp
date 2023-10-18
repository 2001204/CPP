#include<iostream>
using namespace std;

swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y= temp;
}

int main( void  ){
	int a=12;
	int b=23;

	cout<< "Let's break  "<<&a<< "   "<<&b<<endl;

	cout<< "  A : "<<a<<endl;
	cout<< "  B : "<<b<<endl;

	swap(&a, &b);                 // Call By Address
    cout<< "  A : "<<a<<endl;
    cout<< "  B : "<<b<<endl;

}

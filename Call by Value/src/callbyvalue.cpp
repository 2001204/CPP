#include<iostream>
using namespace std;

void swap(int x, int y){
	int temp=x;
	x = y;
	y = temp;
}

int main( void){
	int a=10;
	int b=20;
	swap(a,b);
	cout<< "a : "<< a<<endl;
	cout<< "b : "<< b<<endl;
}

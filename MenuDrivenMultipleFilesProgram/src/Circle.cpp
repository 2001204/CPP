#include<iostream>
using namespace std;

#include"../include/Circle.h"

Circle::Circle( void ){
	this->radius = 0;
}
void Circle::acceptRecord( void ){
	cout << "Radius	:	";
	cin >> this->radius;
}
void Circle::calculateArea( void ){
	this->area = 3.14 * this->radius * this->radius;
}

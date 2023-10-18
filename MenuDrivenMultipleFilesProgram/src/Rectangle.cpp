#include<iostream>
using namespace std;

#include"../include/Rectangle.h"
Rectangle::Rectangle( void ){
	this->length = 0;
	this->breadth = 0;
}
void Rectangle::acceptRecord( void ){
	cout << "Length	:	";
	cin >> this->length;
	cout << "Breadth	:	";
	cin >> this->breadth;
}
void Rectangle::calculateArea( void ){
	this->area = this->length * this->breadth;
}

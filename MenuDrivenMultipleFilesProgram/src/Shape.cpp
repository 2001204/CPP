#include<iostream>
using namespace std;

#include"../include/Shape.h"

Shape::Shape( void ){
	this->area = 0;
}
void Shape::printRecord( void ){
	cout << "Area	:	" << this->area << endl;
}
Shape::~Shape( void ){

}

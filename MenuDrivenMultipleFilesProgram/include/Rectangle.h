#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include"../include/Shape.h"
class Rectangle : public Shape {
private:
	float length;
	float breadth;
public:
	Rectangle( void );

	void acceptRecord( void );

	void calculateArea( void );

};

#endif /* RECTANGLE_H_ */

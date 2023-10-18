#ifndef CIRCLE_H_
#define CIRCLE_H_

#include"../include/Shape.h"
class Circle : public Shape{
private:
	float radius;
public:
	Circle( void );

	void acceptRecord( void );

	void calculateArea( void );
};

#endif /* CIRCLE_H_ */

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape{	//Abstract class
protected:
	float area;
public:
	Shape( void );

	virtual void acceptRecord( void ) = 0;

	virtual void calculateArea( void ) = 0;

	void printRecord( void );

	virtual ~Shape( void );
};

#endif /* SHAPE_H_ */

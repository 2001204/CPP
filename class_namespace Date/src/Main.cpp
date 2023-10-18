#include"date.h"
using namespace calender;
int main( void ){
	date d;
	//int count;
	d.acceptrecord();
	d.printrecord();

	d.validatedate();
	d.adddays();

	return 0;
}

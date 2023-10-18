/*
 * Employee.h
 *
 *  Created on: 15-Sep-2023
 *      Author: DIPAK
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_


namespace nemployee{
	class Employee{
	private:
		char name[ 30 ];
		int empid;
		float salary;
	public:
		void acceptRecord( void );

		void printRecord( void );
	};
}


#endif /* EMPLOYEE_H_ */


#ifndef DATE_H_
#define DATE_H_

namespace calender{
	class date{
	private:
		int day;
		int month;
		int year;

		//int count;
	public:
		void acceptrecord();
		void printrecord();
		void adddays();
		void validatedate();
	};

}
#endif /* DATE_H_ */

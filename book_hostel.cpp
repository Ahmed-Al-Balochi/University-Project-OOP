#include"book_hostel.h"

void book_hostel::book_room(room _r1) {
	r1 = _r1;
}

	string book_hostel::show_book_hostel() {
		cout << "The booked room is " << booking_room << endl;
		return booking_room;
	}

	void book_hostel::update_book_hostel() {
		string r;
		cout << "Select your new room" << endl;
		cin >> r;
		booking_room = r;
	}

	void book_hostel::unbook_hostel() {
		delete& booking_room;
	}

	void book_hostel::manage_fees(hostel price) {
		monthly_fees = price.getPrice();
		cout <<"Monthly dues = "<<monthly_fees << endl;
	}

	void book_hostel::getStudent(student _st1)  //compostion
	{
		st1 = _st1;
	}
	
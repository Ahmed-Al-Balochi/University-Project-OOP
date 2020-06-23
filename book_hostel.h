#include <iostream>
using namespace std;

#pragma once
#include "room.h"
#include"student.h"

class book_hostel {
private:
	string booking_room;
	double monthly_fees;
	student st1;	//compostion
	room r1;	//compostion
	
public:
	void book_room(room _r1);	//compostion
	void getStudent(student _st1);  //compostion
	string show_book_hostel();
	void update_book_hostel();
	void unbook_hostel();


	void manage_fees(hostel price);

};
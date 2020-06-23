#include <iostream>
using namespace std;
#pragma once
#include "student.h"
#include "room.h"
#include "service.h"
#include"hostel_manager.h"
class complain_enquiry {
private:
	
	room r;				//compostion
	service s;			//compostion
	int a, b;
	hostel_manager hm[5];		//aggreagation
	student st1[5];			//aggreagation
	string complain;
	string complaint_reply;
	string enquiry;
	string enquiry_reply;

public:

	void set_room(room _r);	//compostion
	void get_service(service _s);	//compostion
	void set_student(student _st);	//aggreagation
	void set_manager(hostel_manager _hm);	//aggreagation

	void write_complain(service& _s, room& _r, student st);
	string show_complain();

	void create_complaint_reply(service& _s, room& _r, hostel_manager hm1);
	
	string show_complaint_reply();

	void create_enquiry(service& _s, room& _r, student st);
	
	string show_enquiry();

	void create_enquiry_reply(service& _s, room& _r, hostel_manager hm1);
	
	string show_enquiry_reply();


};
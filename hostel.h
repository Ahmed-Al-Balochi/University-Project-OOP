#include <iostream>
using namespace std;
#pragma once

#include"address.h"
#include"hostel_manager.h"
class hostel {
private:
	string hostel_name;
	string hostel_phone_num;
	string detail;
	double hostel_price;
	
	hostel_manager hm;
	address d2; //compostion

public:
	void set_hostel_manager(hostel_manager _hm);
	void hostel_register(); // name.phone num, price,address
	void update_hostel();
	double getPrice();
	
	void search_hostel();  // by price 
	
	void show_hostel_info(); // name.phone num, price,address
	void remove_hostel();
};
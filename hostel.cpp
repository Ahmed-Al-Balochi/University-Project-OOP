#include"hostel.h"
#pragma once

void hostel::set_hostel_manager(hostel_manager _hm) {
	hm = _hm;
}

void hostel::hostel_register() { // Hostel manager adds name.phone num, price,address
	string n, p;
	double e;
	cout << "Hello please enter the Name of the hostel" << endl;
	cin >> n;
	hostel_name = n;

	cout << "Hello please enter your Hostel phone number" << endl;
	cin >> p;
	hostel_phone_num = p;

	cout << "Hello please enter your Price" << endl;
	cin >> e;
	hostel_price = e;

	cout << "Hello please enter your Hostel address" << endl;
	d2.locations();

}

void hostel::update_hostel() {

	cout << "to update Hostel Name enter 1 " << endl;
	cout << "to update Hostel phone number enter 2" << endl;
	cout << "to update Hostel Price enter 3" << endl;
	int s;
	cout << "enter your input" << endl << endl;;
	cin >> s;
	switch (s)
	{
	case 1:
	{
		string hn;
		cout << "Enter new Name" << endl;
		cin >> hn;
		hostel_name = hn;
	}
	case 2:
	{
		string ph;
		cout << "Enter new Number" << endl;
		cin >> ph;
		hostel_phone_num = ph;
	}
	case 3:
	{
		double pr;
		cout << "Enter new Price" << endl;
		cin >> pr;
		hostel_price = pr;
	}
	default:
	{
		cout << "wrong input try again" << endl;
		break;
	}
	}

}

	void hostel::search_hostel(){  // by price 
		cout << "Enter your starting range" << endl;
		double min;
		cin >> min;

		cout << "Enter your Ending range" << endl;
		double max;
		cin >> max;

		
		for (int i=0,hostel_price; this->hostel_price > min && this->hostel_price < max;i++) {
			cout << this->hostel_price << endl;
		}

	}


	void hostel::show_hostel_info() { // name.phone num, price,address
		cout << "Hostel name " << hostel_name << endl;
		cout << "Hostel phone " << hostel_phone_num << endl;
		cout << "Hostel price " << hostel_price << endl;
	}

	double hostel::getPrice() { // name.phone num, price,address
		return hostel_price;
	}

	void hostel::remove_hostel() {
		delete& hostel_name;
		delete& hostel_phone_num;
		delete& hostel_price;
	}
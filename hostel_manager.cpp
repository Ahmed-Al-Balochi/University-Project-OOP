#include"hostel_manager.h"
#pragma once


void hostel_manager::create_manager_id() {
	manager_id= manager_id+1;
}
void hostel_manager::remove_manager_id() {
	delete& manager_id;
}
double hostel_manager::show_manager_id() {
	cout << "Manager ID " << manager_id << endl;
	return manager_id;
}
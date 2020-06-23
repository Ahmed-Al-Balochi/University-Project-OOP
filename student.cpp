#include"student.h"

void student::add_enroled_institute(string inst) {
	enroled_institute_name = inst;
}

string student::show_institute() {
	cout << "The Enroled Institute Name is " << enroled_institute_name << endl;
	return enroled_institute_name;
}
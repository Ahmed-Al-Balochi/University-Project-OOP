#include <iostream>
using namespace std;

#pragma once
#include "user.h"
class student :public user {
private:
	string enroled_institute_name;


public:
	void add_enroled_institute(string inst);
	string show_institute();
}; 

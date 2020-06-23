#include <iostream>
using namespace std;

#pragma once

class address {
private:
	string house_num;
	string street_num;
	string colony;
	string city;
public:

	void locations();

	string show_house();
	void update_house(string update_house);
	void remove_house();

	string show_street();
	void update_street(string update_street);
	void remove_street();

	string show_colony();
	void update_colony(string update_colony);
	void remove_colony();


	string show_city();
	void update_city(string update_city);
	void remove_city();
};
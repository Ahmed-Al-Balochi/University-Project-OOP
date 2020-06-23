#include "address.h"

	void address::locations(){				// compostion address
	string h, s, c, ci;

	cout << "Enter House number " << endl;
	cin >> h;
	house_num = h;

	cout << "Enter Street number " << endl;
	cin >> s;
	street_num = s;

	cout << "Enter Colony Name " << endl;
	cin >> c;
	colony = c;


	cout << "Enter City name " << endl;
	cin >> ci;
	city = ci;
	}

	string address::show_house() {
		cout << "House number is " << house_num << endl;
		return house_num;
	}

	void address::update_house(string update_house) {
		house_num = update_house;
	}

	void address::remove_house() {
		delete &house_num;
	}

	string address::show_street() {
		cout << "Street number is " << street_num << endl;
		return street_num;
	}
	void address::update_street(string update_street) {
		street_num = update_street;
	}

	void address::remove_street() {
		delete& street_num;
	}

	string address::show_colony() {
		cout << "Colony is " << colony << endl;
		return colony;
	}

	void address::update_colony(string update_colony) {
		colony = update_colony;
	}

	void address::remove_colony() {
		delete& colony;
	}


	string address::show_city() {
		cout << "City is " << city << endl;
		return city;
	}

	void address::update_city(string update_city) {
		city = update_city;
	}
	void address::remove_city() {
		delete& city;
	}
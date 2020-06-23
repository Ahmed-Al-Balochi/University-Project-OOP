#include"service.h"
#include"room.h"
	void service::create_service(string s,double p) {		//create service and its price
		service = s;
		service_price =p;
	}

	void service::update_sevice() {
		cout << "Enter the new service that you want to update" << endl;
		string s;
		cin >> s;
		service = s;
	}

	void service::remove_sevrice() {
		delete& service;
	}

	double service::getServicePrice() {
		cout << "The service price is "<< service_price << endl;
		return service_price;
	}

	void service::show_service() {
		cout << "the service in this room is " << service << endl;
	}

	void service::set_room_service(room _r)
	{
		r[a] = _r;
		a++;
	}

	void service::create_mess_menu() {
		string breakfast, lunch, dinner;
		cout << "Enter breakfast " << endl;
		cin >> breakfast;
		

		cout << "Enter lunch " << endl;
		cin >> lunch;

		cout << "Enter dinner " << endl;
		cin >> dinner;

		mess_menu[3] = breakfast;
		mess_menu[3] = lunch;
		mess_menu[3] = dinner;
	}

	void service::update_mess_menu() {
		
		string breakfast, lunch, dinner;
		cout << "Enter new breakfast " << endl;
		cin >> breakfast;


		cout << "Enter new lunch " << endl;
		cin >> lunch;

		cout << "Enter new dinner " << endl;
		cin >> dinner;

		mess_menu[3] = breakfast;
		mess_menu[3] = lunch;
		mess_menu[3] = dinner;
}

	void service::remove_mess_menu() {
		delete& mess_menu[3];
	}

	void service::show_mess_menu(){
		cout << "The meals for the Day are " << endl;
		for (int i = 0; i < 3; i++) {
			cout << mess_menu[3] << endl;
		}
	}
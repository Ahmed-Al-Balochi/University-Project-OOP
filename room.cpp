#include"room.h"

	void room::add_room(int r) { //takes input from user
		room_num = r;
	}
	
	void room::remove_room() {
		delete &room_num;
	}

	void room::update_room() {
		int r;
		cout << "Enter Room's new number " << endl;
		cin >> r;
		room_num = r;
	}

	void room::create_room_info() {
		string rom_info;
		cout << "Enter Room info " << endl;
		cin >> rom_info;
		room_info = rom_info;
	}

	int room::show_room() {
		cout << "Room number is " << room_num << endl;
		return room_num;
	}

void room::hostel_room(hostel _h2)
{
	 h2 = _h2;
}

void room::room_manager(hostel_manager _hm)
{
	hm = _hm;
}

	void room::add_room_floor(int rn) { //takes input from user
		room_floor_num = rn;
	}

	void room::remove_room_floor() {	//takes input from user
		delete& room_floor_num;
	}

	void room::update_room_floor() {	//takes input from user
		int rom_flor;
		cout << "Enter Room floor's new number " << endl;
		cin >> rom_flor;
		room_floor_num = rom_flor;
	}

	int room::show_room_floor(){
		cout << "Room floor is " << room_floor_num << endl;
		return room_floor_num;
	}


	string room::show_room_info() {
		cout << "Room floor is " << room_info << endl;
		return room_info;
	}
#include <iostream>
using namespace std;

#pragma once
#include"hostel.h"
#include"hostel_manager.h"
class room {
private:
	int room_num;
	string room_info;
	int room_floor_num;
	hostel h2; //compostion
	hostel_manager hm;		//compostion

public:
	void add_room(int r); //takes input from user
	void remove_room();
	void update_room();
	void create_room_info();
	int show_room();
	
	void room_manager(hostel_manager _hm);	//compostion
	void hostel_room(hostel _h2);			//compostion

	void add_room_floor(int rn); //takes input from user
	void remove_room_floor();	//takes input from user
	void update_room_floor();	//takes input from user
	int show_room_floor();
	string show_room_info();
};
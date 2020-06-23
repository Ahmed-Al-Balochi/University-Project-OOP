#include <iostream>
using namespace std;
#pragma once
#include"room.h"
class service {
private:
	string service_info;
	string service;
	double service_price;
	
	string mess_menu[3] = {0};
	room r[5]; //aggregation
	int a = 0;

public:
	void create_service(string s, double p);		//create service and its price
	void update_sevice();
	void remove_sevrice();
	void show_service();
	double getServicePrice();

	void set_room_service(room _r);
	void create_mess_menu();
	void update_mess_menu();
	void remove_mess_menu();
	void show_mess_menu();
};
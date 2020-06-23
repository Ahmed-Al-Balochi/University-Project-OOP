#include <iostream>
using namespace std;
#pragma once
#include"address.h"
class user {
private:
	string login_id;	
	string passward;
	string email;
	string name;
	address d2;	//compostion
public:
	void show_passward(user ur);
	void userAddress();	// compostion address 
	void login();	//takes input from user
	void register_account();	//takes input from user
	void show_login();
	void update_login_info(); //email+ passward
	
	void remove_account(user us);
};
#include <iostream>
using namespace std;
#include"user.h"
#pragma once

class hostel_manager :public user {
private:
	int manager_id;
		

public:
	void create_manager_id();
	void remove_manager_id();
	double show_manager_id();
};
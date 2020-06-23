#include <iostream>
using namespace std;
#pragma once
#include "user.h"
class admin :public user {
private:
	double admin_id;
public:
	

	void adminID();
	int getadminID();
};
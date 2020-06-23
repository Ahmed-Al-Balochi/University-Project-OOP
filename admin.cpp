#include "admin.h"
#include "user.h"

void admin::adminID() {
	admin_id++;
}

int admin::getadminID() {
	cout << "Admin ID is" << admin_id << endl;
	return admin_id++;
}

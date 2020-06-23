#include <iostream>
using namespace std;

#include"address.h"
#include"admin.h"
#include"book_hostel.h"
#include"complain_enquiry.h"
#include"hostel.h"
#include"hostel_manager.h"
#include"room.h"
#include"service.h"
#include"student.h"
#include"user.h"

int main() {
	system("COLOR 74"); //color
	
	student a1;
	hostel hos;
	hos.hostel_register();
	a1.register_account();
	//a.userAddress();
	a1.add_enroled_institute("Riphah");
	a1.login();
	a1.show_login();
	a1.show_institute();

	system("CLS");//clear screen
	
	room r1;
	r1.add_room(22);
	r1.add_room_floor(1);
	r1.hostel_room(hos); //composition
	
	cout << "Now the Hostel Manager" << endl;
	hostel_manager hos_manag;
	hos.set_hostel_manager(hos_manag); //composition*/
	r1.room_manager(hos_manag);
	hos_manag.register_account();
	hos_manag.login();
	hos_manag.create_manager_id();

	system("CLS");//clear screen

	book_hostel bh1;
	bh1.getStudent(a1);	//composition
	bh1.book_room(r1);	//composition
	bh1.manage_fees(hos); //composition

	admin ad1;
	ad1.adminID();
	ad1.show_passward(a1); //shows pass

	system("pause");
	return 0;
}
#include"complain_enquiry.h"



void complain_enquiry::set_room(room _r)
{
	r = _r;
}

void complain_enquiry::get_service(service _s)
{
	s = _s;
}

void complain_enquiry::set_student(student _st)
{
	st1[a] = _st;
	a++;
}

void complain_enquiry::set_manager(hostel_manager _hm)
{
	hm[b] = _hm;
	b++;
}

void complain_enquiry::write_complain(service& _s, room& _r, student st) {
	cout << "To make a complain enter 1" << endl;
	cout << "To Update a complain enter 2" << endl;
	cout << "To remove a complain enter 3" << endl;

	int sw;
	cin >> sw;

	while (true)
	{

		switch (sw)
		{
		case 1:
		{
			cout << "You want to complain about this service "; _s.show_service();
			cout << "Which is in this room "; -r.show_room();
			cout << "Your name is "; st.show_login();
			string comp;
			cout << "\n\tEnter your complain here:" << endl;
			cin >> comp;
			complain = comp;
			break;
			
		}

		case 2:
		{
			cout << "You want to Update your complain about this service "; _s.show_service();
			cout << "Which is in this room "; -r.show_room();
			cout << "Your name and email is "; st.show_login();
			string comp;
			cout << "\n\tEnter your Updated complain here:" << endl;
			cin >> comp;
			complain = comp;
			break;
		
		}

		case 3:
		{
			delete& complain;
			cout << "complain has been deleted " << endl;
			break;
			
		}

		default:
			cout << "Wrong input try again" << endl;
			break;
		}
	}
}

	string complain_enquiry::show_complain() {
		cout << "The complain is " << complain << endl;
		return	complain;
	}

	void complain_enquiry::create_complaint_reply(service& _s, room& _r, hostel_manager hm1) {
		cout << "To make a complain reply enter 1" << endl;
		cout << "To Update a complain reply enter 2" << endl;

		int sw;
		cin >> sw;

		while (true)
		{

			switch (sw)
			{
			case 1:
			{
				cout << "You want to reply to this complain " << complain << endl;;
				cout << "Which is in this room "; -r.show_room();
				cout << "Your name is "; hm1.show_login();
				string rep;
				cout << "\n\tEnter your reply here:" << endl;
				cin >> rep;
				complaint_reply = rep;
				break;
				
			}

			case 2:
			{
				cout << "You want to Update the reply to this complain " << complain << endl;;
				cout << "Which is in this room "; -r.show_room();
				cout << "Your name is "; hm1.show_login();
				string rep;
				cout << "\n\tEnter your reply here:" << endl;
				cin >> rep;
				complaint_reply = rep;
				break;
				
			}

			default:
				cout << "Wrong input try again" << endl;
				break;
			}
		}
	}

	string complain_enquiry::show_complaint_reply() {
		cout << "The reply to the Complain is " << complaint_reply << endl;
		return complaint_reply;
	}

	void complain_enquiry::create_enquiry(service& _s, room& _r, student st) {
		cout << "To make a complain enter 1" << endl;
		cout << "To Update a complain enter 2" << endl;
		cout << "To remove a complain enter 3" << endl;

		int sw;
		cin >> sw;

		while (true)
		{

			switch (sw)
			{
			case 1:
			{
				cout << "You have an inquiry about this service "; _s.show_service();
				cout << "Which is in this room "; -r.show_room();
				cout << "Your name is "; st.show_login();
				string inq;
				cout << "\n\tEnter your inquiry here:" << endl;
				cin >> inq;
				enquiry = inq;
				break;
				
			}

			case 2:
			{
				cout << "You want to Update your inquiry about this service "; _s.show_service();
				cout << "Which is in this room "; -r.show_room();
				cout << "Your name and email is "; st.show_login();
				string inq;
				cout << "\n\tEnter your Updated inquiry here:" << endl;
				cin >> inq;
				enquiry = inq;
				break;
				
			}

			case 3:
			{
				delete& enquiry;
				cout << "inquiry has been deleted" << endl;
				break;
				
			}

			default:
				cout << "Wrong input try again" << endl;
				break;
			}
		}
	}

	string complain_enquiry::show_enquiry() {
		cout << "The inquiry is " << enquiry << endl;
		return enquiry;
	}

	void complain_enquiry::create_enquiry_reply(service& _s, room& _r, hostel_manager hm1) {
		cout << "To make a complain reply enter 1" << endl;
		cout << "To Update a complain reply enter 2" << endl;

		int sw;
		cin >> sw;

		while (true)
		{

			switch (sw)
			{
			case 1:
			{
				cout << "You want to reply to this inquiry " << enquiry << endl;;
				cout << "Which is in this room "; -r.show_room();
				cout << "Your name is "; hm1.show_login();
				string rep;
				cout << "\n\tEnter your reply here:" << endl;
				cin >> rep;
				enquiry_reply = rep;
				break;
			
			}

			case 2:
			{
				cout << "You want to Update the reply to this inquiry " << enquiry << endl;;
				cout << "Which is in this room "; -r.show_room();
				cout << "Your name is "; hm1.show_login();
				string rep;
				cout << "\n\tEnter your reply here:" << endl;
				cin >> rep;
				enquiry_reply = rep;
				break;
			
			}

			default:
				cout << "Wrong input try again" << endl;
				break;
			}
		}
	}

	string complain_enquiry::show_enquiry_reply() {
		cout << "The enquiry reply is " << enquiry_reply << endl;
		return enquiry_reply;
	}

#include "user.h"
#pragma once


	void user::login() {	//takes input from user
	string userName;
    string userPassword;
	string userEmail;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;
		cout << "Please enter your user email: ";
		cin >> userEmail;

        if (userName == name && userPassword == passward && userEmail== email)
        {
			cout << "Welcome " << name << endl;
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
			
    }

    cout << "Thank you for logging in.\n";
	}

	void user::register_account() {	//takes input from user
	string n,p,e;
	cout << "Hello please enter your Name" << endl;
	cin >> n;
	name = n;
	
	cout << "Hello please enter your Passward" << endl;
	cin >> p;
	passward = p;

	cout << "Hello please enter your Email" << endl;
	cin >> e;
	email = e;
	
	}
	
	void user::show_login(){
		cout << "Name " << name << endl;
		
		cout << "email " << email << endl;
	}
	
	void user::show_passward(user ur) {
		cout << "Passward is" << ur.passward << endl;
	}
	
	void user::update_login_info() { //email+ passward
		
		cout << "to update Name enter 1 " << endl;
		cout << "to update Passward enter 2" << endl;
		cout << "to update email enter 3" << endl;
		int s;
		cout << "enter your input" << endl << endl;;
		cin >> s;
		switch (s)
		{
		case 1:
			{
			cout << "Enter New Name " << endl;
			string n;
			cin >> n;
			name = n;
			break;
			}

		case 2:
		{
			cout << "Enter New Passward " << endl;
			string p;
			cin >> p;
			passward = p;
			break;
		}

		case 3:
		{
			cout << "Enter New Email " << endl;
			string e;
			cin >> e;
			email = e;
			break;
		}
			

		default:
			cout << "wrong input please try again " << endl;
			break;
		}
	}

	void user::userAddress() {				// compostion address

		cout << "to Enter an address enter 1 " << endl;
		cout << "to Show or update House address enter 2" << endl;
		cout << "to Show or update Street address enter 3" << endl;
		cout << "to Show or update colony address enter 4" << endl;
		cout << "to Show or update city address enter 5" << endl;

		int i, s;
		cout << "enter your input" << endl;
		cin >> s;

		

			switch (s)
			{
			case 1:
			{
				d2.locations();
				break;

			}

			case 2:
			{
				int h=0;

				cout << "To update House info enter 1 \nOr Enter 2 to see House info \nenter any key to exit" << endl;
				cin >> h;
				if (h == 1) {

					string h1;
					cout << "Enter new house info" << endl;
					cin >> h1;
					d2.update_house(h1);
					break;

				}
				else if (h == 2) {
					cout<<d2.show_house();
					break;

				}

			}
			case 3:
			{
				int st;

				cout << "To update Street info enter 1 \nOr Enter 2 to see Street info \nenter any key to exit" << endl;
				cin >> st;
				if (st == 1) {

					string st1;
					cout << "Enter new Street info" << endl;
					cin >> st1;
					d2.update_street(st1);

					break;
				}
				else if (st == 2) {
					d2.show_street();
				}

				break;
			}

			case 4:
			{
				int c1;

				cout << "To update Colony info enter 1 \nOr Enter 2 to see Colony info \nenter any key to exit" << endl;
				cin >> c1;
				if (c1 == 1) {

					string co1;
					cout << "Enter new Colony info" << endl;
					cin >> co1;
					d2.update_colony(co1);

					break;
				}
				else if (c1 == 2) {
					cout <<d2.show_colony();
				}

				break;
			}

			case 5:
			{
				int ci;

				cout << "To update City info enter 1 \nOr Enter 2 to see City info \nenter any key to exit" << endl;
				cin >> ci;
				if (ci == 1) {

					string ci1;
					cout << "Enter new Colony info" << endl;
					cin >> ci1;
					d2.update_city(ci1);
					break;

				}
				else if (ci == 2) {
					cout << d2.show_city();
				}

				break;
			}

			default:
			{
				cout << "Wrong please try again" << endl;
				break;
			}

			}
		}

		void user::remove_account(user us){

		delete& name; delete& passward; delete& email;
	}	// deletes the data
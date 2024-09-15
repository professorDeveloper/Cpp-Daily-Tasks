//
// Created by azamov on 9/14/2024.
//
#include <iostream>
using namespace std;

int main() {
    double money = 500;
    bool isLogout = true;
    string password = "0000";
    string passwordG = "0000";
    int count =0;
    while (true) {
        cout << "Enter your password:" << endl;
        cin >> passwordG;
        if (password == passwordG) {
            isLogout = false;
            while (isLogout == false) {
                cout << "1 . Balance" << endl;
                cout << "2 . Transfer" << endl;
                cout << "3 . Password Change" << endl;
                cout << "4. Connect SMS" << endl;
                cout << "5. logout" << endl;
                cout << "Enter your choice:" << endl;
                int choice;
                cin >> choice;
                switch (choice) {
                    case 1: {
                        cout << "Balance:" << money << endl;
                        break;
                    }
                    case 2: {
                        double moneyEnter;
                        cout << "Enter your money:" << endl;
                        cin >> moneyEnter;
                        if (moneyEnter <= money) {
                            money -= moneyEnter;
                            cout << "Your Money Sucessfully transferred ! Current Balance" << money << endl;
                        } else {
                            cout << "Your Money Not Successfully transferred ! Current Balance " << money << endl;
                        }
                        break;
                    }
                    case 3: {
                        string newPassword, returnPassword;
                        cout << "Enter new password:" << endl;
                        cin >> newPassword;
                        cout << "Returning password:" << endl;
                        cin >> returnPassword;
                        if (returnPassword == newPassword) {
                            cout << "Your password updated:" << endl;
                            password = newPassword;
                        } else {
                            cout << "Your password incorrect !" << endl;
                        }
                        break;
                    }
                    case 4: {
                        string phoneNumber;
                        cout << "Enter your phone  :" << endl;
                        cin >> phoneNumber;
                        //+998992803809
                        if (phoneNumber.length() == 13) {
                            cout << "Your phone connected" << endl;
                        } else {
                            cout << "Your phone is wrong" << endl;
                        }
                        break;
                    }
                    case 5: {
                        char choiceLogout;
                        cout << "Are you sure : y/n"
                                << "\nAre you sure you want to logout?" << endl;
                        cin >> choiceLogout;
                        if (choiceLogout == 'y') {
                            isLogout = true;
                            break;
                        } else {
                            cout << "Logout Canceled !" << endl;
                        }
                        break;
                    }
                    default: {
                        cout << "Invalid Choice!" ;
                    }
                }
            }
        }
        else {
           ++ count ;
            cerr << "Invalid Password!" << endl;
            if (count ==3) {
                cerr << "Application  Locked" << endl;
                cerr << "Please Try again later " << endl;
                return 0;
            }
        }
    }
}

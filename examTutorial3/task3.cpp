//
// Created by azamov on 10/1/2024.
//
#include <iostream>
using namespace std;
#include <iostream>
#include <string>

using namespace std;

class Restaurant {
private:
    string name;
    string cuisineType;
    int capacity;
    string location;
    double rating;
    bool hasDelivery;
    string openingHours;
    string contactNumber;
    string ownerName;
    int staffCount;

public:
    // Default constructor
    Restaurant() : name("Unknown"), cuisineType("Unknown"), capacity(0), location("Unknown"),
                   rating(0.0), hasDelivery(false), openingHours("Unknown"),
                   contactNumber("Unknown"), ownerName("Unknown"), staffCount(0) {}

    // Parameterized constructor
    Restaurant(string n, string cType, int cap, string loc, double rat, bool delivery,
               string hours, string contact, string owner, int staff)
        : name(n), cuisineType(cType), capacity(cap), location(loc), rating(rat),
          hasDelivery(delivery), openingHours(hours), contactNumber(contact),
          ownerName(owner), staffCount(staff) {}

    void DisplayInfo() {
        cout << "Restaurant Name: " << name << endl;
        cout << "Cuisine Type: " << cuisineType << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Location: " << location << endl;
        cout << "Rating: " << rating << endl;
        cout << "Has Delivery: " << (hasDelivery ? "Yes" : "No") << endl;
        cout << "Opening Hours: " << openingHours << endl;
        cout << "Contact Number: " << contactNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Staff Count: " << staffCount << endl;
    }
};

class MedicalClinic {
private:
    string name;
    string address;
    string phoneNumber;
    string typeOfService;
    int numberOfDoctors;
    int numberOfNurses;
    double rating;
    string openingHours;
    bool emergencyService;
    string ownerName;

public:
    // Default constructor
    MedicalClinic() : name("Unknown"), address("Unknown"), phoneNumber("Unknown"),
                      typeOfService("General"), numberOfDoctors(0), numberOfNurses(0),
                      rating(0.0), openingHours("Unknown"), emergencyService(false),
                      ownerName("Unknown") {}

    // Parameterized constructor
    MedicalClinic(string n, string addr, string phone, string service, int docs,
                  int nurses, double rat, string hours, bool emergency, string owner)
        : name(n), address(addr), phoneNumber(phone), typeOfService(service),
          numberOfDoctors(docs), numberOfNurses(nurses), rating(rat),
          openingHours(hours), emergencyService(emergency), ownerName(owner) {}

    void DisplayInfo() {
        cout << "Clinic Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Type of Service: " << typeOfService << endl;
        cout << "Number of Doctors: " << numberOfDoctors << endl;
        cout << "Number of Nurses: " << numberOfNurses << endl;
        cout << "Rating: " << rating << endl;
        cout << "Opening Hours: " << openingHours << endl;
        cout << "Emergency Service: " << (emergencyService ? "Yes" : "No") << endl;
        cout << "Owner Name: " << ownerName << endl;
    }
};

class School {
private:
    string name;
    string address;
    int numberOfStudents;
    int numberOfTeachers;
    string principalName;
    string schoolType;
    double rating;
    string contactNumber;
    string website;
    int establishedYear;

public:
    // Default constructor
    School() : name("Unknown"), address("Unknown"), numberOfStudents(0),
               numberOfTeachers(0), principalName("Unknown"), schoolType("Unknown"),
               rating(0.0), contactNumber("Unknown"), website("Unknown"),
               establishedYear(2000) {
    }

};
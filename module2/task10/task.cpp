//
// Created by azamov on 9/28/2024.
//
#include <iostream>
using namespace std;



class Restaurant {
public:
    string name;
    string address;
    string cuisineType;
    int capacity;
    bool openNow;
    string openingHours;
    string phoneNumber;
    double rating;
    string owner;
    int yearEstablished;

    Restaurant()
        : name(""), address(""), cuisineType(""), capacity(0), openNow(false), openingHours(""), phoneNumber(""), rating(0.0), owner(""), yearEstablished(0) {}

    Restaurant(string n, string addr, string cuisine, int cap, bool open, string hours, string phone, double rate, string own, int year)
        : name(n), address(addr), cuisineType(cuisine), capacity(cap), openNow(open), openingHours(hours), phoneNumber(phone), rating(rate), owner(own), yearEstablished(year) {}

    void DisplayInfo() {
        cout << "Restaurant: " << name << ", Address: " << address << ", Cuisine: " << cuisineType
                  << ", Capacity: " << capacity << ", Open Now: " << (openNow ? "Yes" : "No")
                  << ", Hours: " << openingHours << ", Phone: " << phoneNumber
                  << ", Rating: " << rating << ", Owner: " << owner
                  << ", Established: " << yearEstablished << endl;
    }
};

class MedicalClinic {
public:
    std::string name;
    std::string address;
    std::string specialty;
    std::string doctorInCharge;
    bool emergencyServices;
    std::string phoneNumber;
    double rating;
    int numberOfDoctors;
    std::string openingHours;
    int yearEstablished;

    // Constructor 1: Default
    MedicalClinic()
        : name(""), address(""), specialty(""), doctorInCharge(""), emergencyServices(false), phoneNumber(""), rating(0.0), numberOfDoctors(0), openingHours(""), yearEstablished(0) {}

    // Constructor 2: Parameterized
    MedicalClinic(std::string n, std::string addr, std::string spec, std::string doc, bool emergency, std::string phone, double rate, int docs, std::string hours, int year)
        : name(n), address(addr), specialty(spec), doctorInCharge(doc), emergencyServices(emergency), phoneNumber(phone), rating(rate), numberOfDoctors(docs), openingHours(hours), yearEstablished(year) {}

    // Method to display information
    void DisplayInfo() {
        std::cout << "Clinic: " << name << ", Address: " << address << ", Specialty: " << specialty
                  << ", Doctor in Charge: " << doctorInCharge
                  << ", Emergency Services: " << (emergencyServices ? "Available" : "Not Available")
                  << ", Phone: " << phoneNumber << ", Rating: " << rating
                  << ", Number of Doctors: " << numberOfDoctors << ", Opening Hours: " << openingHours
                  << ", Established: " << yearEstablished << std::endl;
    }
};



class School {
public:
    std::string name;
    std::string address;
    std::string principal;
    int numberOfStudents;
    int numberOfTeachers;
    std::string schoolType;
    std::string phoneNumber;
    std::string schoolBoard;
    int yearEstablished;
    double rating;

    // Constructor 1: Default
    School()
        : name(""), address(""), principal(""), numberOfStudents(0), numberOfTeachers(0), schoolType(""), phoneNumber(""), schoolBoard(""), yearEstablished(0), rating(0.0) {}

    // Constructor 2: Parameterized
    School(std::string n, std::string addr, std::string princ, int students, int teachers, std::string type, std::string phone, std::string board, int year, double rate)
        : name(n), address(addr), principal(princ), numberOfStudents(students), numberOfTeachers(teachers), schoolType(type), phoneNumber(phone), schoolBoard(board), yearEstablished(year), rating(rate) {}

    // Method to display information
    void DisplayInfo() {
        std::cout << "School: " << name << ", Address: " << address << ", Principal: " << principal
                  << ", Students: " << numberOfStudents << ", Teachers: " << numberOfTeachers
                  << ", Type: " << schoolType << ", Phone: " << phoneNumber
                  << ", Board: " << schoolBoard << ", Established: " << yearEstablished
                  << ", Rating: " << rating << std::endl;
    }
};



class Book {
public:
    std::string title;
    std::string author;
    std::string genre;
    int pages;
    std::string publisher;
    std::string ISBN;
    int yearPublished;
    double price;
    std::string language;
    double rating;

    // Constructor 1: Default
    Book()
        : title(""), author(""), genre(""), pages(0), publisher(""), ISBN(""), yearPublished(0), price(0.0), language(""), rating(0.0) {}

    // Constructor 2: Parameterized
    Book(std::string t, std::string a, std::string g, int p, std::string pub, std::string isbn, int year, double pr, std::string lang, double rate)
        : title(t), author(a), genre(g), pages(p), publisher(pub), ISBN(isbn), yearPublished(year), price(pr), language(lang), rating(rate) {}

    // Method to display information
    void DisplayInfo() {
        std::cout << "Book: " << title << ", Author: " << author << ", Genre: " << genre
                  << ", Pages: " << pages << ", Publisher: " << publisher
                  << ", ISBN: " << ISBN << ", Year Published: " << yearPublished
                  << ", Price: " << price << ", Language: " << language
                  << ", Rating: " << rating << std::endl;
    }
};


class Student {
public:
    std::string name;
    int age;
    std::string grade;
    std::string schoolName;
    double GPA;
    std::string major;
    std::string studentID;
    std::string email;
    std::string phoneNumber;
    int yearEnrolled;

    // Constructor 1: Default
    Student()
        : name(""), age(0), grade(""), schoolName(""), GPA(0.0), major(""), studentID(""), email(""), phoneNumber(""), yearEnrolled(0) {}

    // Constructor 2: Parameterized
    Student(std::string n, int a, std::string g, std::string school, double gpa, std::string maj, std::string id, std::string mail, std::string phone, int year)
        : name(n), age(a), grade(g), schoolName(school), GPA(gpa), major(maj), studentID(id), email(mail), phoneNumber(phone), yearEnrolled(year) {}

    // Method to display information
    void DisplayInfo() {
        std::cout << "Student: " << name << ", Age: " << age << ", Grade: " << grade
                  << ", School: " << schoolName << ", GPA: " << GPA << ", Major: " << major
                  << ", Student ID: " << studentID << ", Email: " << email
                  << ", Phone: " << phoneNumber << ", Enrolled: " << yearEnrolled << std::endl;
    }
};


class Job {
public:
    std::string title;
    std::string company;
    std::string location;
    std::string jobType;
    double salary;
    std::string requirements;
    std::string description;
    std::string hiringManager;
    std::string contactEmail;
    int openings;

    // Constructor 1: Default
    Job()
        : title(""), company(""), location(""), jobType(""), salary(0.0), requirements(""), description(""), hiringManager(""), contactEmail(""), openings(0) {}

    // Constructor 2: Parameterized
    Job(std::string t, std::string comp, std::string loc, std::string type, double sal, std::string req, std::string desc, std::string manager, std::string email, int open)
        : title(t), company(comp), location(loc), jobType(type), salary(sal), requirements(req), description(desc), hiringManager(manager), contactEmail(email), openings(open) {}

    // Method to display information
    void DisplayInfo() {
        std::cout << "Job: " << title << ", Company: " << company << ", Location: " << location
                  << ", Job Type: " << jobType << ", Salary: " << salary
                  << ", Requirements: " << requirements << ", Description: " << description
                  << ", Hiring Manager: " << hiringManager << ", Contact: " << contactEmail
                  << ", Openings: " << openings << std::endl;
    }
};

int main() {
    // Restaurant ob'ektlari
    Restaurant r1;  // Default constructor
    Restaurant r2("Pizza Palace", "123 Main St", "Italian", 50, true, "10 AM - 10 PM", "555-1234", 4.5, "John Doe", 1999);

    // MedicalClinic ob'ektlari
    MedicalClinic mc1;  // Default constructor
    MedicalClinic mc2("City Health", "456 Health Ave", "General", "Dr. Jane Smith", true, "555-6789", 4.7, 10, "8 AM - 6 PM", 2005);

    // School ob'ektlari
    School s1;  // Default constructor
    School s2("Greenfield High", "789 Education Blvd", "Mr. Brown", 1000, 80, "Public", "555-9876", "State Board", 1965, 4.2);

    // Book ob'ektlari
    Book b1;  // Default constructor
    Book b2("The Great Gatsby", "F. Scott Fitzgerald", "Fiction", 180, "Scribner", "9780743273565", 1925, 10.99, "English", 4.8);

    // Student ob'ektlari
    Student st1;  // Default constructor
    Student st2("Alice Johnson", 20, "Sophomore", "Greenfield High", 3.8, "Computer Science", "S12345", "alice@example.com", "555-3210", 2020);

    // Job ob'ektlari
    Job j1;  // Default constructor
    Job j2("Software Engineer", "TechCorp", "New York", "Full-time", 85000, "Bachelor's in CS", "Develop and maintain software", "Ms. Emily White", "jobs@techcorp.com", 3);

    // Display info for each object
    std::cout << "Restaurant Information:\n";
    r1.DisplayInfo();
    r2.DisplayInfo();

    std::cout << "\nMedical Clinic Information:\n";
    mc1.DisplayInfo();
    mc2.DisplayInfo();

    std::cout << "\nSchool Information:\n";
    s1.DisplayInfo();
    s2.DisplayInfo();

    std::cout << "\nBook Information:\n";
    b1.DisplayInfo();
    b2.DisplayInfo();

    std::cout << "\nStudent Information:\n";
    st1.DisplayInfo();
    st2.DisplayInfo();

    std::cout << "\nJob Information:\n";
    j1.DisplayInfo();
    j2.DisplayInfo();

}

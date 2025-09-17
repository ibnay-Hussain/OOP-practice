#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor
    Student() {
        cout << "Default Constructor Called\n";
    }

    // Parameterized constructor
    Student(string n, int a) {
    	cout << "Parameterized Constructor Called\n";
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
    	cout << "copy Constructor Called\n";
        name = s.name;
        age = s.age;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called for " << name << endl;
    }

    void display() {
        cout << name << " is " << age << " years old.\n";
    }
};

int main() {
    Student s1("Ali", 20);
    s1.display();

    Student s2 = s1; // Copy constructor
    s2.name = "ahmed";
    s2.display();

    return 0;
}

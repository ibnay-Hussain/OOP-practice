#include <iostream>
using namespace std;

class Student {
public:
    static int count;     // Static member shared by all objects
    string name;

    Student(string n) : name(n) {
        count++;
        cout << "Constructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int Student::count = 0; // Static member initialization

int main() {
    // ?? Static Allocation
    Student s1("Ali");
    s1.display();

    // ?? Reference to Object
    Student& ref = s1;
    ref.name = "Ali Updated";
    ref.display();

    // ?? Pointer to Object
    Student* ptr = &s1;
    ptr->name = "Ali via Pointer";
    ptr->display();

    // ?? Dynamic Allocation
    Student* dyn = new Student("Zara");
    dyn->display();
    delete dyn; // Manual cleanup

    // ?? Static Member Access
    cout << "Total Students Created: " << Student::count << endl;

    return 0;
}

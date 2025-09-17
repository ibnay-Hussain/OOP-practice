#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }

    void display(string val) const {
        cout << "Name: " << name << val << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

// ?? Return by Value (Safe)
Student createByValue() {
    Student s("Ali");
    return s; // Copy or move returned
}

// ?? Return by Reference (?? Unsafe)
Student& createByReference() {
    static Student s("Zara");
    return s; // ? s will be destroyed after function ends
}

// ?? Return by Pointer (Heap Allocation)
Student* createByPointer() {
    Student* s = new Student("Ibnay");
    return s; // ? Object survives until manually deleted
}

int main() {
    cout << "\n--- Return by Value ---\n";
    Student s1 = createByValue(); // Safe copy
    s1.display(" for value");

    cout << "\n--- Return by Reference ---\n";
     Student& s2 = createByReference(); 
     s2.display(" for reference");

    cout << "\n--- Return by Pointer ---\n";
    Student* s3 = createByPointer(); // Heap allocation
    s3->display(" for pointer");
    delete s3; // ? Manual cleanup
    
    
    return 0;
}

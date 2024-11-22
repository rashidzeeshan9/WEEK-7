#include <iostream>
#include <string>
using namespace std;

class pntr_obj {
private:
    int roll_no;
    string name;

public:
   void set_data(int r, string n) {
        roll_no = r;
        name = n;
    }
	void print() {
        cout << "Object at memory address " << this << " has invoked print()." << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << endl;
    }
};

int main() {
    
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(1, "Alice");
    obj2.set_data(2, "Bob");
    obj3.set_data(3, "Charlie");

    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}

#include <iostream>
using namespace std;

class student
{
    int rollno;
    char name[50];
    double fee;

public:
    student()
    {
        cout << "Enter the rollno: " << endl;
        cin >> rollno;
        cout << "Enter the name: " << endl;
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter the fee: " << endl;
        cin >> fee;
    }

    void display() {
        cout << "\n" << rollno << "\n" << name << "\n" << fee << endl;
    }
};

int main() {
    student s;
    s.display();
    return 0;
}

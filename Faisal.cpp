#include <iostream>
using namespace std;
class clsPerson
{
    private:
        string name;
        int age;

    public:
        clsPerson(string n, int a)
        {
            name = n;
            age = a;
        }

        void display()
        {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};
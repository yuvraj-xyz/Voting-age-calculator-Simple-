#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter Your age: ";
    cin >> age;

    int differ = 18 - age;

    if (age>150 or age<1)
    {
        cout << "Invalid age";
    }

     else if (age<11)
    {
        cout << "You are too Young for Voting!";
    }


    else if (age<=16) // valid age for Voting in India is 18 or Above 18
    {
        cout << "You Can't Vote Yet" "\n";
        cout << "But You can Vote in " << differ << " Years" "\n";
    }

    else if (age=17 and differ==1)
    {
        cout << "You Can't Vote Yet" "\n";
        cout << "But You can Vote in " << differ << " Year" "\n";
    }
    
    else 
    {
        cout << "You Can Vote Now!";
    }

}

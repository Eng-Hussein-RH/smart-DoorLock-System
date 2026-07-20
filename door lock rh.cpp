#include <iostream>
#include <string>

using namespace std;
bool checkaccess(string name, string room, string pass) {
    int totalUsers = 3;
    
    string usersData[3][3] = {
        {"hussein", "1", "171"},
        {"Roro", "2", "172"},
        {"ALI",  "3", "173"}
    };

    
    for (int i = 0; i < totalUsers; i++) {
        if (name == usersData[i][0] && room == usersData[i][1] && pass == usersData[i][2]) {
            return true; 
        }
    }

    return 0; 
}

int main() {
    string name, room, pass;

    cout << "--- Smart Door Lock System ---" << endl;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Room Number: ";
    cin >> room;

    cout << "Enter Password: ";
    cin >> pass;

    
    if (checkaccess(name, room, pass)) {
        cout << "\n SUCCESS Access Granted. Door Unlocked! " << endl;
    } else {
        cout << "\n DENIED  Access Refused. Invalid Info! " << endl;
    }

    return 0;
}

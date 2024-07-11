#include <iostream>
#include <queue>
#include <string>
#include <fstream>

using namespace std;

// Function to display the menu options
void displayMenu() {
    cout << "Costume Rental System\n";
    cout << "[1] Add Costume\n";
    cout << "[2] Request Costume\n";
    cout << "[3] Return Costume\n";
    cout << "[4] Costume Details\n";
    cout << "[5] Display All Available Costumes\n";
    cout << "[6] Check Available Costume\n";
    cout << "[7] Customer Maintenance\n";
    cout << "[8] Exit\n";
    cout << "Enter your choice: ";
}

// Function to display the menu options from choosing option 7
void displayChoice7() {
    cout << "Costume Rental System\n";
    cout << "[1] Add New Customer\n";
    cout << "[2] Show Customer Details\n";
    cout << "[3] List of Costumes Rented by a Customer\n";
    cout << "Enter your choice: ";
}

void SubMenu(){
    switch (choice2) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    }
}

loadQueueFromFile(){
}

int main() {
    queue<string> costumeList;
    const string filename = "costumeList.txt";
    
    // Load queue from file
    loadQueueFromFile(customerQueue, filename);

    int choice;

    while (true) {
        displayMenu();
        cin >> choice;
        cin.ignore(); // To ignore the newline character left by cin

        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                displayChoice7(costumeList);
                SubMenu(costumeList)
                break; 
            case 8:
                // Save queue to file
                saveQueueToFile(costumeList, filename);
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
                break;     
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }
    }
}

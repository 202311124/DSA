#include "CostumeRent.h"
#include <iostream>
#include <queue>
#include <string>
#include <fstream>

using namespace std;

void loadQueueFromFile(queue<string>& costumeQueue, const string& filename) {
    ifstream infile(filename.c_str());
    if (infile.is_open()) {
        string costume;
        while (getline(infile, costume)) {
            costumeQueue.push(costume);
        }
        infile.close();
    }
}

void saveQueueToFile(const queue<string>& costumeQueue, const string& filename) {
    ofstream outfile(filename.c_str());
    if (outfile.is_open()) {
        queue<string> tempQueue = costumeQueue; // Create a temporary copy to iterate
        while (!tempQueue.empty()) {
            outfile << tempQueue.front() << endl;
            tempQueue.pop();
        }
        outfile.close();
    }
}


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

void displayChoice7() {
    cout << "Costume Rental System\n";
    cout << "[1] Add New Customer\n";
    cout << "[2] Show Customer Details\n";
    cout << "[3] List of Costumes Rented by a Customer\n";
    cout << "Enter your choice: ";
}

void newCostume (queue<string>& costumeQueue) {
	string costume;
	int costumeSize;
	string costumeFit;
	int costumeQuantity;
	int costumeID;
	cout << "Enter Costume ID: ";
	cin >> costumeID;
	cout << "Enter Costume Name: ";
	cin.ignore();
	getline(cin, costume);
	cout << "Enter Costume Size: ";
	cin >> costumeSize;
	cout << "Enter Costume Fit (Adult/Child): ";
	cin.ignore();
	getline(cin, costumeFit);
	cout << "Enter Quantity of Stock(s): ";
	cin >> costumeQuantity;
}


void newCustomer(queue<string>& customerQueue){
	string customerName;
	int customerID;
	string customerAdd;
	cout << "Enter Customer ID: ";
	cin >> customerID;
	cout << "Enter Name: ";
	getline(cin, customerName);
	cin.ignore();
	cout << "Enter Address: ";
	getline(cin, customerAdd);
	cin.ignore();
}

int main(){
	queue<string> costumeQueue;
	queue<string> customerQueue;
	const string filename = "costumeQueue.txt";
	
	loadQueueFromFile(costumeQueue, filename);

	int choice;
	int choice2;
	while (true){
		displayMenu();
		cin >> choice;
		cin.ignore();
	
	 switch (choice) {
            case 1:
            	newCostume(costumeQueue);
                break;
            case 2:
            	//rentCostume()
                break;
            case 3:
            	//returnCostume()
                break;
            case 4:
            	//costumeDetails()
                break;
            case 5:
            	//displayCostumes()
                break;
            case 6:
            	//checkCostumes()
                break;
            case 7:
                displayChoice7();
                cin >> choice2;
                cin.ignore();
                
                switch (choice2){
                	case 1:
                		newCustomer(customerQueue);
                		break;
                	case 2:
                		//customerDetails()
                		break;
                	case 3:
                		//customerRents()
                		break;
				}
                break; 
            case 8:
            	saveQueueToFile(costumeQueue, filename);
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
                break;   
            default:
            	cout << "Invalid choice, please try again." << endl;
            	break;
			}
}
}

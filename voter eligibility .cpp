#include <iostream>
#include <string>
using namespace std;

int main() {
    string tasks[100];
    int count = 0;
    int choice;

    do {
        cout << "\n--- TO-DO LIST ---\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, tasks[count]);
                count++;
                cout << "Task added successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "No tasks available.\n";
                } else {
                    cout << "\nYour Tasks:\n";
                    for (int i = 0; i < count; i++) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}
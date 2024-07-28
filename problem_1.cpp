#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    int choice, element;
    char continueChoice;

    do {
        cout << "1. Size of the Stack\n";
        cout << "2. Insert Element into the Stack\n";
        cout << "3. Delete Element from the Stack\n";
        cout << "4. Top Element of the Stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Size of the Stack: " << s.size() << endl;
                break;
            case 2:
                cout << "Enter element to insert: ";
                cin >> element;
                s.push(element);
                cout << "Element inserted into the stack.\n";
                break;
            case 3:
                if (!s.empty()) {
                    s.pop();
                    cout << "Element deleted from the stack.\n";
                } else {
                    cout << "Stack is empty. Cannot delete.\n";
                }
                break;
            case 4:
                if (!s.empty()) {
                    cout << "Top element of the stack: " << s.top() << endl;
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

const int MAX_SIZE = 5;

class StackManager {
private:
    stack<int> s;

public:
    void push(int value) {
        if (s.size() >= MAX_SIZE) {
            cout << "Stack is full. Cannot push.\n";
            return;
        }
        s.push(value);
        cout << "Pushed: " << value << endl;
    }

    void pop() {
        if (s.empty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        cout << "Popped: " << s.top() << endl;
        s.pop();
    }

    void top() {
        if (s.empty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Top element: " << s.top() << endl;
    }

    void isEmpty() {
        cout << (s.empty() ? "Stack is empty.\n" : "Stack is not empty.\n");
    }

    void isFull() {
        cout << (s.size() >= MAX_SIZE ? "Stack is full.\n" : "Stack is not full.\n");
    }
};
int main() {
    StackManager sm;
    int choice, value;

    do {
        cout << "1. Push\n2. Pop\n3. Top\n4. Is Empty\n5. Is Full\n6. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                sm.push(value);
                break;
            case 2:
                sm.pop();
                break;
            case 3:
                sm.top();
                break;
            case 4:
                sm.isEmpty();
                break;
            case 5:
                sm.isFull();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}
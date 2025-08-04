#include <iostream>
#include <vector>
using namespace std;

template <class T>
class MemoryCalculate {
public:
    T id;
    string name;

    MemoryCalculate(T i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id<< " Name: " << name << endl;
    }
};

int main() {
    vector<MemoryCalculate<int>> students;
    int ch, id;
    string name;

    while (true) {
        cout << "Press 1. for Add: "<<endl;
        cout << "Press 2. for Show: "<<endl;
        cout << "Press 3. for Search: "<<endl;
        cout << "Press 4. for Remove: "<<endl;
        cout << "Press 5. for Exit: "<<endl;
        cin >> ch;

        if (ch == 1) {
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            students.push_back(MemoryCalculate<int>(id, name));
        }

        else if (ch == 2) {
            for (auto s : students) s.display();
        }

        else if (ch == 3) {
            cout << "Enter ID to search: ";
            cin >> id;
            bool found = false;
            for (auto s : students) {
                if (s.id == id) {
                    s.display();
                    found = true;
                }
            }
            if (!found) cout << "Not found\n";
        }

        else if (ch == 4) {
            cout << "Enter ID to remove: ";
            cin >> id;
            for (int i = 0; i < students.size(); i++) {
                if (students[i].id == id) {
                    students.erase(students.begin() + i);
                    cout << "Removed\n";
                    break;
                }
            }
        }

        else if (ch == 5) {
            break;
        }

        else {
            cout << "Wrong choice\n";
        }
    }

    return 0;
}
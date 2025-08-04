#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class DMA {
    Node* head;

public:
    DMA() {
        head = nullptr;
    }

    void append(int value) {
        Node* newNode = new Node{value, nullptr};

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
        cout << value<<endl;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node{value, head};
        head = newNode;
        cout << value << " added at beginning.\n";
    }

    void search(int key) {
        Node* temp = head;
        int pos = 1;
        while (temp != nullptr) {
            if (temp->data == key) {
                cout << key << " found at position " << pos << ".\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << key << " not found.\n";
    }

    void deleteNode(int key) {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << key << " deleted.\n";
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != key)
            temp = temp->next;

        if (temp->next == nullptr) {
            cout << key << " not found.\n";
            return;
        }

        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        cout << key << " deleted.\n";
    }

    void reverse() {
        Node* prev = nullptr;
        Node* curr = head;

        while (curr != nullptr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
        Node* temp = head;
        cout << "List reversed:\n";
        while (temp != nullptr) {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << "\n";
    }

    void display() {
        Node* temp = head;
        cout << "List: ";
        while (temp != nullptr) {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << "\n";
    }

    ~DMA() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    DMA list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.display();

    list.insertAtBeginning(5);
    list.display();

    list.search(20);
    list.search(100);

    list.deleteNode(10);
    list.display();

    list.reverse();

    return 0;
}
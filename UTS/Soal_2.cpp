#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* node1 = new Node();
    node1->data = 80;
    node1->next = nullptr;

    Node* node2 = new Node();
    node2->data = 90;
    node2->next = nullptr;
    node1->next = node2;

    Node* head = node1;
    Node* tail = node2;

    Node* node3 = new Node();
    node3->data = 40;
    node3->next = nullptr;

    Node* node4 = new Node();
    node4->data = 50;
    node4->next = nullptr;
    node4->next = head;
    head = node4;
    
    Node* node5 = new Node();
    node5->data = 30;
    node5->next = node2->next;
    node2->next = node5;

    cout << "List awal: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = nullptr;
    cout << "hapus nilai di depan: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    tail->next = node3;
    tail = node3;
    cout << "Setelah tambah node3 di akhir: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    temp = head;
    head = head->next;
    delete temp;
    cout << "Setelah hapus node depan: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
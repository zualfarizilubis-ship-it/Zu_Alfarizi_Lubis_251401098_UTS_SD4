#include <iostream> 
#include <string>   

using namespace std; 

struct NodeQueue {
    string namaPelanggan; 
    NodeQueue* next;    
};

class QueueAntrean {
private:
    NodeQueue *front, *rear; 
public:
    QueueAntrean() { front = rear = nullptr; }
    
    void enqueue(string nama) {
        NodeQueue* baru = new NodeQueue{nama, nullptr};
        if (rear == nullptr) {         
            front = rear = baru;      
            return;
        }
        rear->next = baru;            
        rear = baru;                   
    }

   
    void dequeue() {
        if (front == nullptr) {        
            cout << "Antrean kosong!\n";
            return;
        }
        NodeQueue* temp = front;      
        cout << "Melayani melayani Pelanggan untuk: " << front->namaPelanggan << endl; 
        front = front->next;          
        if (front == nullptr) rear = nullptr;
        delete temp;                   
    }

    void display() {
        cout << "Antrean Pelanggan (FIFO): ";
        NodeQueue* temp = front;      
        if (!temp) cout << "[Kosong]"; 
        while (temp != nullptr) {      
            cout << temp->namaPelanggan << " -> "; 
            temp = temp->next;         
        }
        cout << endl;
    }
};

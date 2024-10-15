#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int n):data(n), next(nullptr){}
};

class Queue {
    Node* front;
    Node* rear;
public:
    Queue():front(nullptr), rear(nullptr) {}
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear==nullptr) {
            front=rear=newNode;
            return;
        }
        rear->next=newNode; 
        rear=newNode;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1;
        }
        Node* temp = front;
        int value = front->data;
        front = front->next; 
        if (front == nullptr) { 
            rear = nullptr; 
        }
        delete temp; 
        return value;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot peek." <<endl;
            return -1;
        }
        return front->data;
    }
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue q;
    q.enqueue(100);
    q.enqueue(230);
    q.enqueue(190);
    cout << "Front element is: " << q.peek() << endl;
    cout<< "Dequeued: " << q.dequeue() <<endl;
    cout<<"NExt element: "<<q.peek()<<endl;
    q.enqueue(40);
    while (!q.isEmpty()) {
        cout<<"Dequeued: "<<q.dequeue()<<endl;
    }
}

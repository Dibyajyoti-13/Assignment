#include <iostream>
using namespace std;
#define M 100
class Queue{
public:
    int arr[M];
    int priority[M];
    int front, rear, size, capacity;
    Queue(int n){
        front = -1;
        rear = 0;
        size = 0;
        capacity = n;
    }

    void Enqueue(int num, int prio){
        if(capacity==size){
            cout<<"Queue is full! Cannot Enqueue.\n";
            return;
        }
        if (front == -1)
        {
            arr[++front] = num;
            priority[size++] = prio;
            return;
        }
        int i;
        for (i = rear; i >= front && priority[i]<prio; i--)
        {
            priority[i + 1] = priority[i];
            arr[i + 1] = arr[i];
        }
        priority[i+1] = prio;
        arr[i+1] = num;
        rear++;
        size++;
    }

    void Dequeue(){
        if (front == -1 || front > rear) {
            cout << "Queue is empty! Cannot Dequeue.\n";
            return;
        }
        cout << "Dequeued Element: Value " << arr[front] << "\tPriority " << priority[front] << endl;
        front++;
        size--;
        if(size==0){
            front=-1;
            rear=0;
        }
    }

    void Display(){
        if(front==-1){
            cout<<"Queue is empty!"<<endl;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << "Value: "<<arr[i] << "\tPriority: " << priority[i] << endl;
        }
    }
};

int main(){
    int n, value, p;
    cout << "Enter size: ";
    cin >> n;
    Queue q(n);
    cout << "Enter values with priority (value,priority): ";
    for (int i = 0; i < n; i++)
    {
        cin >> value >> p;
        q.Enqueue(value, p);
    }
    q.Display();
    q.Dequeue();
    return 0;
}
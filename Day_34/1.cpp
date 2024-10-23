#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int a) : data(a), next(nullptr) {};
};

void insert(Node *&head, int data)
{
    Node *n = new Node(data);
    if (head == nullptr)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void fun_sort(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        cout << "Empty Linked list" << endl;
        return;
    }
    Node *even = head->next;
    Node *temp = even;
    Node *odd = head;
    while (even != nullptr && even->next != nullptr)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = temp;
}

void display(Node *&hd)
{
    Node *head = hd;
    if (head == nullptr)
    {
        cout << "Empty Linked list" << endl;
        return;
    }
    while (head->next != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << head->data << endl;
}

int main()
{
    Node *head = nullptr;
    int n, a;
    cout << "Enter size of linked list: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> a;
        insert(head, a);
    }
    cout << "Before Grouping: " << endl;
    display(head);
    fun_sort(head);
    cout << "After Grouping: " << endl;
    display(head);
}
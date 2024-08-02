#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head = nullptr;

    void add(int v)
    {
        Node *newNode = new Node(v);
        if(head == nullptr)
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void print()
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;  // For better output clarity
    }

    void removeNodeAtIndex(int index)
    {
        if(head == nullptr) return;

        Node* temp = head;

        if(index == 0)
        {
            head = temp->next;
            delete temp;
            return;
        }

        for(int i = 0; temp != nullptr && i < index - 1; i++)
        {
            temp = temp->next;
        }

        if(temp == nullptr || temp->next == nullptr) return;

        Node* next = temp->next->next;
        delete temp->next;
        temp->next = next;
    }
};

int main()
{
    LinkedList list;
    for(int i = 1; i <= 10; i++)
    {
        int x = i * 10;
        list.add(x);
    }

    int n = 8;  // Last digit of your ID
    list.removeNodeAtIndex(n);
    list.print();  // Expected Output: 10->20->30->40->50->60->70->80->100->nullptr
}

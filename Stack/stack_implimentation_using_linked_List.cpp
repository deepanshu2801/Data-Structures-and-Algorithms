#include <iostream>
using namespace std;

// Stack implementation using linked list
struct Node 
{    
    int data; 
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL; 
    }
};

class Stack 
{
public:
    Node* top =  NULL;
    int size = 0 ;

    void push(int value)
    {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        size++;
        cout << value << " is pushed\n";
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow\n";
            return;
        }

        Node* temp = top;
        top = top->next;
        cout << temp->data << " is popped\n";
        delete temp;
        size--;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack elements (top to bottom):\n";
        Node* temp = top;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << top->data << " is at the top\n";
    }

    void getSize()
    {
        cout << "Current stack size: " << size << endl;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    ~Stack()
    {
        Node* temp;
        while (top != NULL)
        {
            temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.display();
    s.peek();
    s.getSize();
}

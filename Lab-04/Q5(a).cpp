#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
        cout << "Pushed\n";
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << q1.front() << endl;
        q1.pop();
    }

    void peek() {
        if (q1.empty())
            cout << "Stack is empty\n";
        else
            cout << "Top: " << q1.front() << endl;
    }

    bool isEmpty() {
        return q1.empty();
    }

    void display() {
        queue<int> temp = q1;

        if (temp.empty()) {
            cout << "Stack is empty\n";
            return;
        }

        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }

        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, x;

    do {
        cout << "\n1.Push  2.Pop  3.Peek"
             << "\n4.Display  5.isEmpty  0.Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            s.push(x);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout << (s.isEmpty() ? "Empty\n" : "Not Empty\n");
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 0);

    return 0;
}

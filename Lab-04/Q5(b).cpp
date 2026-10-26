#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);

        int n = q.size();

        for (int i = 0; i < n - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        cout << "Pushed\n";
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << q.front() << endl;
        q.pop();
    }

    void peek() {
        if (q.empty())
            cout << "Stack is empty\n";
        else
            cout << "Top: " << q.front() << endl;
    }

    bool isEmpty() {
        return q.empty();
    }

    void display() {
        queue<int> temp = q;

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

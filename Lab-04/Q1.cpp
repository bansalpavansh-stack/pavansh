#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == SIZE - 1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }

        if (isEmpty())
            front = 0;

        arr[++rear] = x;
        cout << "Inserted\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if (front == rear)
            front = rear = -1;
        else
            front++;
    }

    void peek() {
        if (isEmpty())
            cout << "Queue is empty\n";
        else
            cout << "Front: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, x;

    do {
        cout << "\n1.Enqueue  2.Dequeue  3.isEmpty"
             << "\n4.isFull   5.Display  6.Peek"
             << "\n0.Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            q.enqueue(x);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            cout << (q.isEmpty() ? "Empty\n" : "Not Empty\n");
            break;
        case 4:
            cout << (q.isFull() ? "Full\n" : "Not Full\n");
            break;
        case 5:
            q.display();
            break;
        case 6:
            q.peek();
            break;
        case 0:
            cout << "Exit\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 0);

    return 0;
}

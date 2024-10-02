#include <iostream>
#define MAX 1000

class Queue {
    int front, rear;
    int arr[MAX];  // Array to store queue elements

public:
    Queue() { front = rear = -1; }

    bool enqueue(int x) {
        if (rear == MAX - 1) {
            std::cout << "Queue Overflow" << std::endl;
            return false;
        }
        if (front == -1) front = 0;  // First element inserted
        arr[++rear] = x;
        return true;
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            std::cout << "Queue Underflow" << std::endl;
            return -1;
        }
        return arr[front++];
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << q.dequeue() << " dequeued from queue" << std::endl;  // Output: 10 dequeued from queue
    std::cout << q.dequeue() << " dequeued from queue" << std::endl;  // Output: 20 dequeued from queue

    return 0;
}

#include <iostream>
#define MAX 1000

class Stack {
    int top;

public:
    int arr[MAX];  // Array to store stack elements

    Stack() { top = -1; }  // Initialize the top of the stack as -1

    bool push(int x) {
        if (top >= (MAX - 1)) {
            std::cout << "Stack Overflow" << std::endl;
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop() {
        if (top < 0) {
            std::cout << "Stack Underflow" << std::endl;
            return 0;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            std::cout << "Stack is Empty" << std::endl;
            return 0;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << s.pop() << " popped from stack" << std::endl;  // Output: 30 popped from stack
    std::cout << "Top element is: " << s.peek() << std::endl;  // Output: Top element is: 20

    return 0;
}

#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int capacity;
    int top;

    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i <= top; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

public:
    Stack(int size = 10) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top + 1 == capacity) {
            resize();
        }
        arr[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    int size() {
        return top + 1;
    }

    void clear() {
        top = -1;
    }

    bool contains(int value) {
        for (int i = 0; i <= top; i++) {
            if (arr[i] == value) {
                return true;
            }
        }
        return false;
    }

    void print() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int* toArray() {
        int* copy = new int[size()];
        for (int i = 0; i <= top; i++) {
            copy[i] = arr[i];
        }
        return copy;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.print();  // Stack (top to bottom): 40 30 20 10

    cout << "Top element: " << s.peek() << endl;
    cout << "Contains 20? " << (s.contains(20) ? "Yes" : "No") << endl;
    cout << "Contains 100? " << (s.contains(100) ? "Yes" : "No") << endl;

    s.pop();
    s.print();  // Stack after pop

    cout << "Size: " << s.size() << endl;

    s.clear();
    s.print();  // Stack is empty.

    return 0;
}

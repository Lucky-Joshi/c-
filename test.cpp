/*
Practical 3:
 WAP for recursively adding all the elements of an array. 
/*
#include <iostream>
using namespace std;

// Recursive function to calculate sum of array elements
int sumArray(int arr[], int size) {
    if (size == 0)
        return 0; // Base case: if array is empty, return 0
    return arr[size - 1] + sumArray(arr, size - 1); // Recursive step
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int totalSum = sumArray(arr, size);
    cout << "Sum of array elements: " << totalSum << endl;

    return 0;
}
*/
/*
Practical 4:
 WAP implementing recursive function for finding nth Fibonacci of a number.
*/
/*
#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
*/
/*
Practical 5
WAP to implement insertion sort. 
*/
/*
#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
*/
/*
Practical: 6 
WAP performing matrix addition. 
*/
/*
#include <iostream>
using namespace std;

void matrixAddition(int A[][3], int B[][3], int C[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void displayMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];

    matrixAddition(A, B, C, 3, 3);

    cout << "Matrix A:\n";
    displayMatrix(A, 3, 3);

    cout << "Matrix B:\n";
    displayMatrix(B, 3, 3);

    cout << "Resultant Matrix (A + B):\n";
    displayMatrix(C, 3, 3);

    return 0;
}
*/
/*
Practical: 7
 WAP performing matrix multiplication.
*/
/*
#include <iostream>
using namespace std;

void matrixMultiplication(int A[][3], int B[][3], int C[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];

    matrixMultiplication(A, B, C, 3, 3);

    cout << "Matrix A:\n";
    displayMatrix(A, 3, 3);

    cout << "Matrix B:\n";
    displayMatrix(B, 3, 3);

    cout << "Resultant Matrix (A * B):\n";
    displayMatrix(C, 3, 3);

    return 0;
}
*/
/*
Practical:8 
Check Whether the Length of a Given Linked List is Even or Odd
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void checkEvenOrOdd() {
        Node* temp = head;
        int count = 0;

        while (temp) {
            count++;
            temp = temp->next;
        }

        if (count % 2 == 0)
            cout << "The length of the linked list is Even.\n";
        else
            cout << "The length of the linked list is Odd.\n";
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.checkEvenOrOdd(); // Output: Even

    list.insert(50);
    list.checkEvenOrOdd(); // Output: Odd

    return 0;
}
*/
/*Practical:9
Search an Element in a Linked List and Return its Position
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    int search(int key) {
        Node* temp = head;
        int position = 1; // Start position from 1

        while (temp) {
            if (temp->data == key)
                return position;
            temp = temp->next;
            position++;
        }
        return -1; // Not found
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    int key = 30;
    int position = list.search(key);

    if (position != -1)
        cout << "Element " << key << " found at position: " << position << endl;
    else
        cout << "Element " << key << " not found in the linked list.\n";

    return 0;
}
*/
/*
Practical:10
WAP to count number of nodes in a given linked list.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Number of nodes in the linked list: " << list.countNodes() << endl;

    return 0;
}
*/
/*
Practical:11
WAP to insert elements 2, 20, 4, and 5 in order in a singly linked list from front and then print the numbers.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Inserting elements from the front
    list.insertFront(5);
    list.insertFront(4);
    list.insertFront(20);
    list.insertFront(2);

    // Printing the linked list
    cout << "Linked List elements: ";
    list.printList();

    return 0;
}
*/
/*
Practical:12
WAP implementing doubly linked list.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    // Insert at the front
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Insert at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete a node
    void deleteNode(int val) {
        if (!head) return;

        Node* temp = head;

        // If head node needs to be deleted
        if (head->data == val) {
            head = head->next;
            if (head) head->prev = nullptr;
            delete temp;
            return;
        }

        while (temp && temp->data != val) {
            temp = temp->next;
        }

        if (!temp) return; // Element not found

        if (temp->next) temp->next->prev = temp->prev;
        if (temp->prev) temp->prev->next = temp->next;

        delete temp;
    }

    // Count nodes in the doubly linked list
    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.insertFront(5);
    dll.insertFront(2);

    cout << "Doubly Linked List: ";
    dll.display();

    cout << "Number of nodes: " << dll.countNodes() << endl;

    dll.deleteNode(20);
    cout << "After deleting 20: ";
    dll.display();

    return 0;
}
*/
/*
Practical:13
WAP to insert an element (new node) in a doubly linked list at the end.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) { // If the list is empty
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) { // Traverse to the last node
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Function to display the list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Inserting elements at the end
    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.insertEnd(40);

    // Displaying the linked list
    cout << "Doubly Linked List: ";
    dll.display();

    return 0;
}
*/
/*
Practical: 14
WAP implementing circular linked list.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = nullptr;
    }

    // Insert at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) { // If the list is empty
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) { // Traverse to the last node
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    // Delete a node
    void deleteNode(int val) {
        if (!head) return;

        Node* temp = head, *prev = nullptr;

        // If head needs to be deleted
        if (head->data == val) {
            while (temp->next != head) { // Traverse to last node
                temp = temp->next;
            }
            if (head == head->next) { // Only one node in list
                delete head;
                head = nullptr;
                return;
            }
            temp->next = head->next;
            delete head;
            head = temp->next;
            return;
        }

        // Traverse the list
        do {
            prev = temp;
            temp = temp->next;
        } while (temp != head && temp->data != val);

        if (temp == head) return; // Not found

        prev->next = temp->next;
        delete temp;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertEnd(10);
    cll.insertEnd(20);
    cll.insertEnd(30);
    cll.insertEnd(40);

    cout << "Circular Linked List: ";
    cll.display();

    cll.deleteNode(20);
    cout << "After deleting 20: ";
    cll.display();

    return 0;
}
*/
/*
Practical: 15
WAP to count number of nodes in a circular linked list.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = nullptr;
    }

    // Insert at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) { // If the list is empty
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) { // Traverse to the last node
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    // Count nodes in Circular Linked List
    int countNodes() {
        if (!head) return 0; // Empty list

        int count = 0;
        Node* temp = head;
        do {
            count++;
            temp = temp->next;
        } while (temp != head);

        return count;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertEnd(10);
    cll.insertEnd(20);
    cll.insertEnd(30);
    cll.insertEnd(40);

    cout << "Circular Linked List: ";
    cll.display();

    cout << "Number of nodes: " << cll.countNodes() << endl;

    return 0;
}
*/
/*
Practical: 16
Implement stack data structure and its operations using arrays.
*/
/*
#include <iostream>
#define MAX 5  // Define maximum size of the stack
using namespace std;

class Stack {
private:
    int top; 
    int arr[MAX]; // Array to store stack elements

public:
    Stack() { top = -1; } // Constructor initializes top

    // Push operation
    void push(int val) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << val << endl;
            return;
        }
        arr[++top] = val;
        cout << val << " pushed into stack." << endl;
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! No element to pop." << endl;
            return;
        }
        cout << arr[top--] << " popped from stack." << endl;
    }

    // Peek operation (Get top element)
    int peek() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top < 0;
    }

    // Display the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);  // This will show stack overflow
    s.display();
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    s.pop(); 
    s.display();
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
*/
/*
Practical:17
 Implement stack data structure and its operations using linked Lists.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    Stack() { top = nullptr; } // Constructor initializes top as NULL

    // Push operation
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top; // New node points to the previous top
        top = newNode; // New node becomes the top
        cout << val << " pushed into stack." << endl;
    }

    // Pop operation
    void pop() {
        if (!top) {
            cout << "Stack Underflow! No element to pop." << endl;
            return;
        }
        Node* temp = top;
        cout << top->data << " popped from stack." << endl;
        top = top->next; // Move top to the next node
        delete temp;
    }

    // Peek operation (Get top element)
    int peek() {
        if (!top) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.pop();
    
    s.display();

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
*/
/*
Practical:18 
Implement queue data structure and its operations using arrays.
*/
/*
#include <iostream>
#define MAX 5  // Define maximum size of the queue
using namespace std;

class Queue {
private:
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation (Insert element into the queue)
    void enqueue(int val) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow! Cannot insert " << val << endl;
            return;
        }
        if (front == -1) front = 0; // Set front if it's the first element
        arr[++rear] = val;
        cout << val << " enqueued into queue." << endl;
    }

    // Dequeue operation (Remove element from the queue)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! No element to dequeue." << endl;
            front = rear = -1; // Reset queue when empty
            return;
        }
        cout << arr[front++] << " dequeued from queue." << endl;
    }

    // Get front element
    int getFront() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }

    // Get rear element
    int getRear() {
        if (rear == -1) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[rear];
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // This will show queue overflow

    q.display();

    cout << "Front element is: " << q.getFront() << endl;
    cout << "Rear element is: " << q.getRear() << endl;

    q.dequeue();
    q.dequeue();

    q.display();

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
*/
/*
Practical:19 
Implement queue data structure and its operations using Linked Lists.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue {
private:
    Node *front, *rear; // Front and rear pointers

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue operation (Insert element into the queue)
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (!rear) { // If queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued into queue." << endl;
    }

    // Dequeue operation (Remove element from the queue)
    void dequeue() {
        if (!front) {
            cout << "Queue Underflow! No element to dequeue." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;

        if (!front) rear = nullptr; // If queue becomes empty, reset rear

        cout << temp->data << " dequeued from queue." << endl;
        delete temp;
    }

    // Get front element
    int getFront() {
        if (!front) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    // Get rear element
    int getRear() {
        if (!rear) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return rear->data;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout << "Front element is: " << q.getFront() << endl;
    cout << "Rear element is: " << q.getRear() << endl;

    q.dequeue();
    q.dequeue();

    q.display();

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
*/
/*Write a C++ program that inserts and removes integers in an array in descending order, and prints the array, as discussed in the last class.*/
/*
#include <iostream>
using namespace std;

#define MAX 100 // Define maximum size of the array

class DescendingOrderArray {
private:
    int arr[MAX];
    int size;

public:
    DescendingOrderArray() {
        size = 0;
    }

    // Function to insert an element in descending order
    void insert(int val) {
        if (size >= MAX) {
            cout << "Array is full! Cannot insert " << val << endl;
            return;
        }
        int i;
        for (i = size - 1; (i >= 0 && arr[i] < val); i--) {
            arr[i + 1] = arr[i];
        }
        arr[i + 1] = val;
        size++;
    }

    // Function to remove an element
    void remove(int val) {
        int i;
        for (i = 0; i < size; i++) {
            if (arr[i] == val) {
                break;
            }
        }
        if (i == size) {
            cout << "Element " << val << " not found in the array." << endl;
            return;
        }
        for (int j = i; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        size--;
    }

    // Function to print the array
    void printArray() {
        if (size == 0) {
            cout << "Array is empty." << endl;
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DescendingOrderArray arr;

    arr.insert(30);
    arr.insert(10);
    arr.insert(20);
    arr.insert(40);
    arr.insert(50);

    arr.printArray();

    arr.remove(20);
    arr.printArray();

    arr.remove(60); // Element not in the array

    return 0;
}
*/
/*Modify above program that inserts and removes Objects of GameEntry Class (consisting of two variables string name and int score) in an array in descending order of scores, and prints the array, as discussed in the last class.*/
/*
#include <iostream>
#include <string>
using namespace std;

#define MAX 100 // Define maximum size of the array

class GameEntry {
public:
    string name;
    int score;

    GameEntry(string n = "", int s = 0) : name(n), score(s) {}
};

class DescendingOrderArray {
private:
    GameEntry arr[MAX];
    int size;

public:
    DescendingOrderArray() {
        size = 0;
    }

    // Function to insert an element in descending order of scores
    void insert(GameEntry entry) {
        if (size >= MAX) {
            cout << "Array is full! Cannot insert " << entry.name << endl;
            return;
        }
        int i;
        for (i = size - 1; (i >= 0 && arr[i].score < entry.score); i--) {
            arr[i + 1] = arr[i];
        }
        arr[i + 1] = entry;
        size++;
    }

    // Function to remove an element by name
    void remove(string name) {
        int i;
        for (i = 0; i < size; i++) {
            if (arr[i].name == name) {
                break;
            }
        }
        if (i == size) {
            cout << "Element " << name << " not found in the array." << endl;
            return;
        }
        for (int j = i; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        size--;
    }

    // Function to print the array
    void printArray() {
        if (size == 0) {
            cout << "Array is empty." << endl;
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << "(" << arr[i].name << ", " << arr[i].score << ") ";
        }
        cout << endl;
    }
};

int main() {
    DescendingOrderArray arr;

    arr.insert(GameEntry("Alice", 30));
    arr.insert(GameEntry("Bob", 10));
    arr.insert(GameEntry("Charlie", 20));
    arr.insert(GameEntry("Dave", 40));
    arr.insert(GameEntry("Eve", 50));

    arr.printArray();

    arr.remove("Charlie");
    arr.printArray();

    arr.remove("Frank"); // Element not in the array

    return 0;
}
*/
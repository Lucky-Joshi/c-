/*
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int comparisons = 0;
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            comparisons++; // Count comparisons inside while loop
        }
        
        arr[j + 1] = key;
        comparisons++; // Count the last comparison that fails the while condition

        // Display the array after each iteration
        cout << "Step " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
    cout << "Total comparisons: " << comparisons << endl;
}

int main() {
    int arr[] = {8, 2, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    return 0;
}
*/
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << " ";
    return 0;
}

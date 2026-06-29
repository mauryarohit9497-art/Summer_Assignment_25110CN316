#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void displayArray(const int arr[], int size);
void insertElement(int arr[], int &size);
void deleteElement(int arr[], int &size);
void searchElement(const int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    cout << "Enter the initial number of elements (Max " << MAX_SIZE << "): ";
    cin >> size;

    if (size > MAX_SIZE) {
        cout << "Size exceeded maximum limit. Setting size to " << MAX_SIZE << ".\n";
        size = MAX_SIZE;
    }

    if (size > 0) {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Element " << i << ": ";
            cin >> arr[i];
        }
    }

    do {
        cout << "\n========= ARRAY OPERATIONS SYSTEM =========\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                insertElement(arr, size);
                break;
            case 3:
                deleteElement(arr, size);
                break;
            case 4:
                searchElement(arr, size);
                break;
            case 5:
                cout << "\nExiting the system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please select an option between 1 and 5.\n";
        }
        
        cout << "\n-------------------------------------------\n";

    } while (choice != 5);

    return 0;
}

void displayArray(const int arr[], int size) {
    if (size == 0) {
        cout << "\nArray is empty!\n";
        return;
    }
    cout << "\nCurrent Array Elements: [ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\nTotal active elements: " << size << "\n";
}

void insertElement(int arr[], int &size) {
    if (size >= MAX_SIZE) {
        cout << "\nError: Array Overflow! Cannot insert more elements.\n";
        return;
    }

    int element, position;
    cout << "\nEnter the element to insert: ";
    cin >> element;
    cout << "Enter the index/position (0 to " << size << "): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position! Insertion failed.\n";
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;
    cout << "Element inserted successfully!\n";
}

void deleteElement(int arr[], int &size) {
    if (size == 0) {
        cout << "\nError: Array Underflow! No elements to delete.\n";
        return;
    }

    int position;
    cout << "\nEnter the index/position to delete (0 to " << size - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= size) {
        cout << "Invalid position! Deletion failed.\n";
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
    cout << "Element deleted successfully!\n";
}

void searchElement(const int arr[], int size) {
    if (size == 0) {
        cout << "\nArray is empty! Nothing to search.\n";
        return;
    }

    int target;
    bool found = false;
    cout << "\nEnter the element to search for: ";
    cin >> target;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at index/position: " << i << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element " << target << " not found in the array.\n";
    }
}
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    double price;
};

void addProduct(vector<Product> &inventory);
void displayInventory(const vector<Product> &inventory);
void searchProduct(const vector<Product> &inventory);
void updateStock(vector<Product> &inventory);

int main() {
    vector<Product> inventory;
    int choice;

    do {
        cout << "\n======= INVENTORY MANAGEMENT SYSTEM =======\n";
        cout << "1. Add New Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Search Product by ID\n";
        cout << "4. Update Product Stock (Restock/Sell)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct(inventory);
                break;
            case 2:
                displayInventory(inventory);
                break;
            case 3:
                searchProduct(inventory);
                break;
            case 4:
                updateStock(inventory);
                break;
            case 5:
                cout << "\nExiting System. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
        cout << "\n-------------------------------------------\n";
    } while (choice != 5);

    return 0;
}

void addProduct(vector<Product> &inventory) {
    Product newProd;
    cout << "\nEnter Product ID: ";
    cin >> newProd.id;

    for (const auto &prod : inventory) {
        if (prod.id == newProd.id) {
            cout << "Error: Product with ID " << newProd.id << " already exists!\n";
            return;
        }
    }

    cin.ignore();
    cout << "Enter Product Name: ";
    getline(cin, newProd.name);
    cout << "Enter Quantity: ";
    cin >> newProd.quantity;
    cout << "Enter Price: ";
    cin >> newProd.price;

    inventory.push_back(newProd);
    cout << "\nProduct added successfully!\n";
}

void displayInventory(const vector<Product> &inventory) {
    if (inventory.empty()) {
        cout << "\nInventory is empty!\n";
        return;
    }

    cout << "\n-----------------------------------------------------\n";
    cout << left << setw(10) << "ID" 
         << setw(20) << "Name" 
         << setw(12) << "Quantity" 
         << "Price ($)\n";
    cout << "-----------------------------------------------------\n";

    for (const auto &prod : inventory) {
        cout << left << setw(10) << prod.id 
             << setw(20) << prod.name 
             << setw(12) << prod.quantity 
             << fixed << setprecision(2) << prod.price << "\n";
    }
}

void searchProduct(const vector<Product> &inventory) {
    if (inventory.empty()) {
        cout << "\nInventory is empty!\n";
        return;
    }

    int searchId;
    cout << "\nEnter Product ID to search: ";
    cin >> searchId;

    for (const auto &prod : inventory) {
        if (prod.id == searchId) {
            cout << "\nProduct Found:\n";
            cout << "ID: " << prod.id << "\n";
            cout << "Name: " << prod.name << "\n";
            cout << "Quantity: " << prod.quantity << "\n";
            cout << "Price: $" << fixed << setprecision(2) << prod.price << "\n";
            return;
        }
    }
    cout << "\nProduct with ID " << searchId << " not found.\n";
}

void updateStock(vector<Product> &inventory) {
    if (inventory.empty()) {
        cout << "\nInventory is empty!\n";
        return;
    }

    int targetId, updateChoice, amount;
    cout << "\nEnter Product ID to update: ";
    cin >> targetId;

    for (auto &prod : inventory) {
        if (prod.id == targetId) {
            cout << "\nCurrent stock for " << prod.name << " is " << prod.quantity << ".\n";
            cout << "1. Restock (Add)\n2. Sell (Subtract)\nChoice: ";
            cin >> updateChoice;

            if (updateChoice == 1) {
                cout << "Enter quantity to add: ";
                cin >> amount;
                prod.quantity += amount;
                cout << "Stock updated successfully!\n";
            } else if (updateChoice == 2) {
                cout << "Enter quantity to sell: ";
                cin >> amount;
                if (amount > prod.quantity) {
                    cout << "Error: Not enough stock available!\n";
                } else {
                    prod.quantity -= amount;
                    cout << "Stock updated successfully!\n";
                }
            } else {
                cout << "Invalid choice. Operation canceled.\n";
            }
            return;
        }
    }
    cout << "\nProduct with ID " << targetId << " not found.\n";
}

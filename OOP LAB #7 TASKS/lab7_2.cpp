#include <iostream>
using namespace std;

class Product {
protected:
    int productID;
    string productName;
    double price;

public:
    Product(int id, string name, double p) : productID(id), productName(name), price(p) {}
    virtual void applyDiscount() {}
    virtual void displayProductInfo() {
        cout << "Product: " << productName << " | Price: $" << price << endl;
    }
};

class Electronics : public Product {
    int warrantyPeriod;
    string brand;
public:
    Electronics(int id, string name, double p, int warranty, string b) : Product(id, name, p), warrantyPeriod(warranty), brand(b) {}
    void displayProductInfo() {
        cout << "Electronics: " << productName << " | Brand: " << brand << " | Warranty: " << warrantyPeriod << " years | Price: $" << price << endl;
    }
};

class Clothing : public Product {
    string size, color, fabricMaterial;
public:
    Clothing(int id, string name, double p, string s, string c, string f) : Product(id, name, p), size(s), color(c), fabricMaterial(f) {}
    void applyDiscount() {
        price *= 0.9; 
    }
};

class FoodItem : public Product {
    string expirationDate;
    int calories;
public:
    FoodItem(int id, string name, double p, string exp, int cal) : Product(id, name, p), expirationDate(exp), calories(cal) {}
    void calculateTotalPrice(int quantity) {
        double total = price * quantity * 0.95; 
        cout << "Total Price for " << quantity << " " << productName << " is: $" << total << endl;
    }
};

int main() {
    Electronics laptop(1, "Laptop", 1200, 2, "Dell");
    Clothing tshirt(2, "T-Shirt", 25, "M", "Blue", "Cotton");
    FoodItem apple(3, "Apple", 1.5, "2025-04-01", 95);

    laptop.displayProductInfo();
    tshirt.applyDiscount();
    tshirt.displayProductInfo();
    apple.calculateTotalPrice(10);

    return 0;
}
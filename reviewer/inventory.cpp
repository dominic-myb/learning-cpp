#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <vector>

class Item {
private:
  std::string name;
  int quantity;
  float price;

public:
  Item(const std::string &name, int quantity, float price)
      : name(name), quantity(quantity), price(price) {}

  // Setters
  bool setName(std::string &name) {
    if (name.length() > 18) {
      std::cerr << "Item name must be 18 characters long.\n";
      return false;
    }
    this->name = name;
    return true;
  }

  bool setQuantity(int qty) {
    if (qty < 0) {
      std::cerr << "Error: Negative Quantity.";
      return false;
    }
    this->quantity = qty;
    return true;
  }

  bool setPrice(float price) {
    if (price < 0) {
      std::cerr << "Error: Price cannot be negative.";
      return false;
    }
    price = std::round(price * 100.0) / 100.0;
    this->price = price;
    return true;
  }

  // Getters
  std::string getName() const { return name; }
  int getQuantity() const { return quantity; }
  float getPrice() const { return price; }
};

// file save & load
void saveItem(std::string &path, std::vector<Item> items) {
  std::ofstream file(path);
  if (file.is_open()) {
    for (const Item &item : items) {
      file << item.getName() << " " << item.getQuantity() << " "
           << item.getPrice() << '\n';
    }
    file.close();
  }
}

void loadItem(std::string &path, std::vector<Item> item) {
  std::ifstream file(path);
  if (!file) {
    std::cerr << "Error: Failed to open the file.";
    return;
  }
  std::string name = "";
  int qty;
  float price;
  while (file >> name >> qty >> price) {
    Item i("", 0, 0);
    i.setName(name);
    i.setQuantity(qty);
    i.setPrice(price);
    item.push_back(i);
  }
}

void displayItems(std::vector<Item> &item) {
  if (item.size() < 1) {
    std::cout << "No items in database.\n";
    return;
  }

  for (int i = 0; i < item.size(); i++) {
    std::cout << "Item Name: " << item[i].getName() << '\n';
    std::cout << "Item Quantity: " << item[i].getQuantity() << '\n';
    std::cout << "Item Price: " << item[i].getPrice() << '\n';
  }
}

int main() {
  std::vector<Item> items;
  std::string file = "inventory.txt";
  int numberOfItems = 0;
  loadItem(file, items);
  displayItems(items);

  std::cout << "How many items?: ";
  while (!(std::cin >> numberOfItems)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
  }

  std::string name;
  int qty;
  float price;

  for (int i = 0; i < numberOfItems; i++) {
    name = "";
    qty = 0;
    price = 0;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    std::cout << "Item #" << i + 1 << '\n';
    std::cout << "Item Name (18 characters max): ";
    while (!(std::getline(std::cin, name)) || items[i].setName(name)) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // while (true) {
    //   std::cout << "Item Quantity: ";
    //   std::cin >> qty;

    //   if (std::cin.fail()) {
    //     std::cin.clear();
    //     std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    //     continue;
    //   }

    //   if (items[i].setQuantity(qty)) {
    //     break;
    //   }
    // }

    // while (true) {
    //   std::cout << "Item Price: ";
    //   std::cin >> price;

    //   if (std::cin.fail()) {
    //     std::cin.clear();
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //     continue;
    //   }

    //   if (items[i].setPrice(price)) {
    //     break;
    //   }
    // }
    // std::cout << '\n';
  }
  saveItem(file, items);
  displayItems(items);

  return 0;
}
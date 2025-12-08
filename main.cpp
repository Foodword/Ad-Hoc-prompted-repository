#include <iostream>
#include "List.h"
#include "Item.h"
#include "Calendar.h"

int main() {
    List todoList;

    int choice = 0;

    while (choice != 4) {
        std::cout << "\n1. Add item\n2. Show items\n3. Remove item\n4. Quit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string title;
            int d, m, y;

            std::cout << "Enter title: ";
            std::cin.ignore();
            std::getline(std::cin, title);

            std::cout << "Enter due date (day month year): ";
            std::cin >> d >> m >> y;

            Calendar date(d, m, y);
            Item item(title, date);

            todoList.addItem(item);
        }
        else if (choice == 2) {
            todoList.display();
        }
        else if (choice == 3) {
            int index;
            std::cout << "Enter item number to remove: ";
            std::cin >> index;

            if (todoList.removeItem(index - 1)) {
                std::cout << "Item removed.\n";
            } else {
                std::cout << "Invalid item number.\n";
            }
        }
    }

    return 0;
}

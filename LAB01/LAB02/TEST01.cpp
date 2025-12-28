#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

int main() {
	double price = 0.0;
    int qty = 0;

    std::cout << "Enter unit price: ";
    while (!(std::cin >> price) || price < 0.0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter unit price (non-negative number): ";
    }

    std::cout << "Enter quantity: ";
    while (!(std::cin >> qty) || qty < 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter quantity (non-negative integer): ";
    }

    double total = price * qty;

    std::cout << "\nReceipt\n";
    std::cout << "---------------------------\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Unit price : " << price << "\n";
    std::cout << "Quantity   : " << qty << "\n";
    std::cout << "Total      : " << total << "\n";

	return 0;
}

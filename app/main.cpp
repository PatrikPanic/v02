#include <iostream>
#include <format>
#include "app.h"

using namespace vsite::oop::v2;

std::string to_hex(int n) {
    return std::format("{:02X}", n);
}

int main() {
    double r_val, g_val, b_val;

    std::cout << "Unesite RGB komponente (0 ili 1):\n";
    std::cin >> r_val >> g_val >> b_val;

    color c;
    c.set_red(r_val);
    c.set_green(g_val);
    c.set_blue(b_val);

    int R = static_cast<int>(c.get_red() * 255);
    int G = static_cast<int>(c.get_green() * 255);
    int B = static_cast<int>(c.get_blue() * 255);

    std::cout << "RGB vrijednost boje je: #"
        << to_hex(R)
        << to_hex(G)
        << to_hex(B)
        << "\n";

    return 0;
}

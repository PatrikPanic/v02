#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
    color::color() : red(0), green(0), blue(0) {}
    color::color(const color&) = default;
    color& color::operator=(const color&) = default;

    void color::set_red(double r) {
        red = std::clamp(r, 0.0, 1.0);
    }

    void color::set_green(double g) {
        green = std::clamp(g, 0.0, 1.0);
    }

    void color::set_blue(double b) {
        blue = std::clamp(b, 0.0, 1.0);
    }

    double color::get_red() const { return red; }
    double color::get_green() const { return green; }
    double color::get_blue() const { return blue; }

    COLORREF color::get_color_ref() const {
        int r = static_cast<int>(red * 255);
        int g = static_cast<int>(green * 255);
        int b = static_cast<int>(blue * 255);
        return RGB(r, g, b);
    }

    double color::get_luminance() const {
        return red * 0.2126 + green * 0.7152 + blue * 0.0722;
    }
}

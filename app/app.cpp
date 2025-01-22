#include "app.h"
#include <algorithm>
#include <cstdint>
#include <string>
#include <format>

namespace vsite::oop::v2
{
	color::color() : red(0.0), green(0.0), blue(0.0) {}

	color::color(const color& other)
	{
		red = other.red;
		green = other.green;
		blue = other.blue;
	}

	uint32_t color::get_color_ref() const
	{
		uint8_t r = static_cast<uint8_t>(red * 255);
		uint8_t g = static_cast<uint8_t>(green * 255);
		uint8_t b = static_cast<uint8_t>(blue * 255);

		return RGB(r, g, b);
	}

	double color::get_luminance() const
	{
		return (0.2126 * red) + (0.7152 * green) + (0.0722 * blue);
	}

	double color::get_red() const
	{
		return red;
	}
	double color::get_green() const
	{
		return green;
	}
	double color::get_blue() const
	{
		return blue;
	}

	void color::set_red(const double num)
	{
		red = std::clamp(num, 0.0, 1.0);
	}
	void color::set_green(const double num)
	{
		green = std::clamp(num, 0.0, 1.0);
	}
	void color::set_blue(const double num)
	{
		blue = std::clamp(num, 0.0, 1.0);
	}

	std::string color::to_hex(const int num)
	{
		return std::format("{:X}", num);
	}
}

#pragma once

#include <cstdint>
#include <string>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
	class color
	{
	private:

		double red, green, blue;

	public:

		color();
		color(const color& other);

		uint32_t get_color_ref() const;

		double get_luminance() const;

		double get_red() const;
		double get_green() const;
		double get_blue() const;

		void set_red(const double num);
		void set_green(const double num);
		void set_blue(const double num);

		std::string to_hex(const int num);

	};
}

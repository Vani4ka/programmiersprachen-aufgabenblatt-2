#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "vec2.hpp"
#include "color.hpp"

class Rectangle
{
public:
	Rectangle(Vec2 const& s, double h, double l);
	Rectangle(Vec2 const& s, double h, double l, Color const& col);

	Vec2 getStart() const;
	double getHeight() const;
	double getLength() const;

private:
	Vec2 start_;
	double height_;
	double length_;
	Color color_;
	
};

#endif
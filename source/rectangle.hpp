#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Rectangle
{
public:
	Rectangle(Vec2 const& s, float h, float l);
	Rectangle(Vec2 const& s, float h, float l, Color const& col);

	Vec2 getStart() const;
	float getHeight() const;
	float getLength() const;

	float circumference() const;
	void draw(Window const& win) const;
	void draw(Window const& win, Color const& col) const;

private:
	Vec2 start_;
	float height_;
	float length_;
	Color color_;
	
};

#endif
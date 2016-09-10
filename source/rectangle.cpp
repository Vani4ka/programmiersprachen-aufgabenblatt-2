#include <iostream>
#include "rectangle.hpp"

Rectangle::Rectangle(Vec2 const& s, double h, double l):
start_{s},
height_{h},
length_{l},
color_{{0.0}}
{}
Rectangle::Rectangle(Vec2 const& s, double h, double l, Color const& col):
start_{s},
height_{h},
length_{l},
color_{col}
{}

Vec2 Rectangle::getStart() const {
	return start_;
}

double Rectangle::getHeight() const {
	return height_;
}

double Rectangle::getLength() const {
	return length_;
}

double Rectangle::circumference() const {
	return 2*(length_+height_);
}
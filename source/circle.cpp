#include <iostream>
#include "circle.hpp"

Circle::Circle(Vec2 const& c, double r):
center_{c},
radius_{r},
color_{{0.0}}
{}

Circle::Circle(Vec2 const& c, double r, Color const& col):
center_{c},
radius_{r},
color_{col}
{}

Vec2 Circle::getCenter() const {
	return center_;
}

double Circle::getRadius() const {
	return radius_;
}
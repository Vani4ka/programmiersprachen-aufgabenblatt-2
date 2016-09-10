#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "color.hpp"

class Circle
{
public:
	Circle(Vec2 const& c, double r);
	Circle(Vec2 const& c, double r, Color const& col);

	Vec2 getCenter() const;
	double getRadius() const;

private:
	Vec2 center_;
	double radius_;
	Color color_;
	
};


#endif
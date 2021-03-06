#include <iostream>
#include "rectangle.hpp"

Rectangle::Rectangle(Vec2 const& s, float h, float l):
start_{s},
height_{h},
length_{l},
color_{{0.0}},
basecolor_{{0.0}}
{}
Rectangle::Rectangle(Vec2 const& s, float h, float l, Color const& col):
start_{s},
height_{h},
length_{l},
color_{col},
basecolor_{col}
{}

Vec2 Rectangle::getStart() const {
	return start_;
}

float Rectangle::getHeight() const {
	return height_;
}

float Rectangle::getLength() const {
	return length_;
}

float Rectangle::circumference() const {
	return 2*(length_+height_);
}

void Rectangle::draw(Window const& win) const {
	win.draw_line(start_.getx(), start_.gety(), start_.getx()+length_, start_.gety(), color_.r_, color_.g_, color_.b_);
	win.draw_line(start_.getx()+length_, start_.gety(), start_.getx()+length_, start_.gety() + height_ , color_.r_, color_.g_, color_.b_);
	win.draw_line(start_.getx()+length_, start_.gety() + height_, start_.getx(), start_.gety() + height_ , color_.r_, color_.g_, color_.b_);
	win.draw_line(start_.getx(), start_.gety() + height_, start_.getx(), start_.gety(), color_.r_, color_.g_, color_.b_);

}

void Rectangle::draw(Window const& win, Color const& col) const {
	win.draw_line(start_.getx(), start_.gety(), start_.getx()+length_, start_.gety(), col.r_, col.g_, col.b_);
	win.draw_line(start_.getx()+length_, start_.gety(), start_.getx()+length_, start_.gety() + height_ , col.r_, col.g_, col.b_);
	win.draw_line(start_.getx()+length_, start_.gety() + height_, start_.getx(), start_.gety() + height_ , col.r_, col.g_, col.b_);
	win.draw_line(start_.getx(), start_.gety() + height_, start_.getx(), start_.gety(), col.r_, col.g_, col.b_);
}

bool Rectangle::is_inside(Vec2 const& p) const {
	if(p.getx()>start_.getx() && p.getx()<start_.getx()+length_ && p.gety()>start_.gety() && p.gety()<start_.gety()+height_) {
		return true;
	}
	else return false;
}

void Rectangle::setColor(Color const& col) {
	color_=col;
}

void Rectangle::resetColor() {
	color_=basecolor_;
}
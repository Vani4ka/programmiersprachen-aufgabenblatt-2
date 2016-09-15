#include <iostream>
#include "mat2.hpp"

Mat2::Mat2():
x1_{1.0f},
x2_{0.0f},
y1_{0.0f},
y2_{1.0f}
{}

Mat2::Mat2(float x1, float x2, float y1, float y2):
x1_{x1},
x2_{x2},
y1_{y1},
y2_{y2}
{}

float Mat2::getx1() const {
	return x1_;
}

float Mat2::getx2() const {
	return x2_;
}

float Mat2::gety1() const {
	return y1_;
}

float Mat2::gety2() const {
	return y2_;
}

Mat2& Mat2::operator *=( Mat2 const& m ) {
	int x1=x1_*m.getx1() + x2_*m.gety1();
	int x2=x1_*m.getx2() + x2_*m.gety2();
	int y1=y1_*m.getx1() + y2_*m.gety1();
	int y2=y1_*m.getx2() + y2_*m.gety2();
	x1_=x1;
	x2_=x2;
	y1_=y1;
	y2_=y2;
	return *this;
}

Mat2 operator*( Mat2 const& m1 , Mat2 const& m2 ) {
	Mat2 tmp(m1);
 	tmp *= m2;
 	return tmp;
}

//Ohne Aufgabe 2.6
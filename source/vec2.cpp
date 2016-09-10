#include <iostream>
#include "vec2.hpp"

Vec2::Vec2():
x(0.0f),
y(0.0f)
{}

Vec2::Vec2(float x_, float y_):
x(x_),
y(y_)
{}

Vec2& Vec2::operator+=( Vec2 const& v ){
	return new Vec2(x+v.x, y+v.y);
}

Vec2& Vec2::operator-=( Vec2 const& v ) {
	return new Vec2(x-v.x, y-v.y);
}

Vec2& Vec2::operator*=( float v ) {
	return new Vec2(x*v, y*v);
}

Vec2& Vec2::operator/( float v ) {
	return new Vec2(x/v, y/v);
}

Vec2 Vec2::operator+( Vec2 const& u , Vec2 const& v ) {
	return Vec2(u.x+v.x, u.y+v.y);
}

Vec2 Vec2::operator-( Vec2 const& u , Vec2 const& v ) {
	return Vec2(u.x-v.x, u.y-v.y);
}

Vec2 Vec2::operator*( Vec2 const& v , float s ) {
	return Vec2(v.x*s, v.y*s);
}

Vec2 Vec2::operator/( Vec2 const& v , float s ) {
	return Vec2(v.x/s, v.y/s);
}
Vec2 Vec2::operator*( float s , Vec2 const& v ) {
	return Vec2(v.x*s, v.y*s);
}

#ifndef MAT2_HPP
#define MAT2_HPP

class Mat2
{
public:
	Mat2();
	Mat2(float x1, float x2, float y1, float y2);
	// Matrix in der Form:
	// x1 x2
	// y1 y2

	Mat2& operator *=( Mat2 const& m );
	float getx1() const;
	float getx2() const;
	float gety1() const;
	float gety2() const;

private:
	float x1_;
	float x2_;
	float y1_;
	float y2_;
	
};

Mat2 operator*( Mat2 const& m1 , Mat2 const& m2 );

//Ohne Aufgabe 2.6

#endif
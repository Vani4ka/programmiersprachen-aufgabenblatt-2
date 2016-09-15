#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "mat2.hpp"



TEST_CASE ("describe_mat2","[mat2]")
{
	Mat2 m1{1,2,3,4};
	Mat2 m2{5,6,7,8};
	m1*=m2;

	Mat2 m3{5,6,7,8};
	Mat2 m4{1,2,3,4};
	Mat2 m5=m3*m4;


	REQUIRE(m1.getx1()==19);
	REQUIRE(m1.getx2()==22);
	REQUIRE(m1.gety1()==43);
	REQUIRE(m1.gety2()==50);

	REQUIRE(m5.getx1()==23);
	REQUIRE(m5.getx2()==34);
	REQUIRE(m5.gety1()==31);
	REQUIRE(m5.gety2()==46);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
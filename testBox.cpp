
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Box.hpp"

TEST_CASE("1: Test getters") {

    float h = 1;
    float b = 2;
    float l = 3;
    Box box{h,b,l};

    REQUIRE(h == Approx(box.getHeight()));
    REQUIRE(b == Approx(box.getBreadth()));
    REQUIRE(l == Approx(box.getLength()));
}

TEST_CASE("2: Test setters") {

    float h = 1;
    float b = 2;
    float l = 3;
    Box box;

    REQUIRE(0 == Approx(box.getHeight()));
    REQUIRE(0 == Approx(box.getBreadth()));
    REQUIRE(0 == Approx(box.getLength()));

    box.setHeight(h);
    box.setBreadth(b);
    box.setLength(l);

    REQUIRE(h == Approx(box.getHeight()));
    REQUIRE(b == Approx(box.getBreadth()));
    REQUIRE(l == Approx(box.getLength()));
}

TEST_CASE("3: Test volume") {

    float h = 1;
    float b = 2;
    float l = 3;
    Box box{h,b,l};

    float v = h*b*l;

    REQUIRE(v == Approx(box.getVolume()));
}
#include "pch.h"
#include "../Triangle/TriangleFigure.h"

TEST(TriangleFigureTest, ValidTriangle) {

	TriangleFigure trojkat1(4, 3, 5);

	EXPECT_EQ(trojkat1.isValid(), true);

}

TEST(TriangleFigureTest, InvalidTriangle) {

	TriangleFigure trojkat1(2, 1, 5);

	EXPECT_EQ(trojkat1.isValid(), false);
}

TEST(TriangleFigureTest, EdgeCase) {

	TriangleFigure trojkat1(1, 2, 3);

	EXPECT_EQ(trojkat1.isValid(), false);
}

TEST(TriangleFigureTest, InvalidParam) {

	TriangleFigure trojkat1(-4, 3, 5);

	EXPECT_EQ(trojkat1.isValid(), false);
}

TEST(TriangleFigureTest, TestAreaValid) {

	TriangleFigure trojkat1(4, 3, 5);

	EXPECT_EQ(trojkat1.getArea(), 6);
}

TEST(TriangleFigureTest, TestPerimeterValid) {

	TriangleFigure trojkat1(4, 3, 5);

	EXPECT_EQ(trojkat1.getPerimeter(), 12);
}

TEST(TriangleFigureTest, TestAreaInvalid) {

	TriangleFigure trojkat1(2, 1, 5);

	EXPECT_EQ(trojkat1.getArea(), 0);
}

TEST(TriangleFigureTest, TestdPerimeterInvalid) {

	TriangleFigure trojkat1(2, 1, 5);

	EXPECT_EQ(trojkat1.getPerimeter(), 0);
}
#include "pch.h"
#include "../Basic/Calculator.h"

TEST(SumTest, Test2Plus2Equals4)
{
	Calculator calc;

	EXPECT_EQ(calc.suma(2, 2), 4);
}
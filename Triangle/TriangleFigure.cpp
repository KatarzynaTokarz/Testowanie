#include "TriangleFigure.h"
#include <cmath>

TriangleFigure::TriangleFigure(float sideA, float sideB, float sideC)
{
	a = sideA;
	b = sideB;
	c = sideC;
}

float TriangleFigure::getArea()
{
	if (isValid())
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		return area;
	}
	else
	{
		return 0;
	}
}

float TriangleFigure::getPerimeter()
{
	if (isValid())
	{
		perimeter = (a + b + c);
		return perimeter;
	}
	else
	{
		return 0;
	}
}

bool TriangleFigure::isValid()
{
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		return false;
	}
	else
	{
		return true;
	}
}

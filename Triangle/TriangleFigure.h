#pragma once

//Zadanie 3.
//Napisz i przetestuje klasê Triangle, która w c - torze przyjmuje 3 boki
//- dodaj metode getArea, która wyliczy pole
//pole wylicz za pomoc¹ wzoru Herona : https://www.mathopenref.com/heronsformula.html
//-dodaj metodê getPerimeter, która wyliczy obwód
//- dodaj metodê isValid, która zwróci prawdê je¿eli trój¹kt jest poprwany
//Trójk¹t jest porpwany, gdy suma d³ugoœci dwóch boków trójk¹ta jest zawsze wiêksza od d³ugoœci trzeciego boku
//- je¿eli trójk¹t nie moze istnieæ to niech wszystkie funkcje coœ wyliczaj¹ce zwracaj¹ 0
//

class TriangleFigure
{
private:
	float a;
	float b;
	float c;
	float s;
	float area;
	float perimeter;

public:

	TriangleFigure(float sideA, float sideB, float sideC);
	float getArea();
	float getPerimeter();
	bool isValid();
};


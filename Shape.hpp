#pragma once

class Rectangle 
{
	int a = 0, b = 0;
public:
	Rectangle();
	Rectangle(int a, int b);
	void setDimensions(int x, int y);
	int getField();
	int getCircuit();
};
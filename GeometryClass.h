#include <iostream>

class Geometry
{
	float length;
	float width;

public:
	Geometry();
	float calcPerimeter(float lengthPerimeter,float widthPerimeter);
	float calcArea(float lengthArea,float widthArea);
	void setLength();
	float getLength(float length);
	void setWidth();
	float getWidth(float width);
	void showData(float showPerimeter,float showArea);
	int exitProgram(int exit);
};

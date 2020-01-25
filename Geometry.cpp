#pragma once
#include <iostream>
#include <iomanip>
#include "GeometryClass.h"

using namespace std;


float length; //User input
float width; //User input
Geometry::Geometry()
{
	int exit = 2;
	while (exit==2)
	{
		length = 0;
		width = 0;
		setLength();
		setWidth();
		showData(calcPerimeter(length, width), calcArea(length, width));
		exit = exitProgram(exit);
	}
	
	
}
int Geometry::exitProgram(int exit)
{
	int possibleExit;
	cout << "Enter CTRL+Z to exit, otherwise type any number" << endl; //Prompt
	cin >> possibleExit;
	if (cin.eof())
	possibleExit = 1;
	else
		possibleExit = 2;
	return possibleExit;
}
float Geometry::calcPerimeter(float lengthPerimeter, float widthPerimeter)
{
	return (lengthPerimeter * 2) + (widthPerimeter * 2);
}
float Geometry::calcArea(float lengthArea, float widthArea)
{
	return lengthArea*widthArea;
	}
float Geometry::getLength(float length)
{
	
	cout << "Enter a number for length:  "; //Prompt
	cin >> length;

	
		while (cin.fail() || length < 0 || cin.eof()) //Check for invalid data (non-numerics, negatives)
		{
			cout << "You must enter a number, and that number must be positive.  Please try again. " << endl; //Error message
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nEnter a number:  "; //Prompt
			cin >> length;
		}

	return length;
}
float Geometry::getWidth(float width)
{
	
	cout << "Enter a number for width:  "; //Prompt
	cin >> width;

	
		while (cin.fail() || width < 0 || cin.eof()) //Check for invalid data (non-numerics, negatives)
		{
			cout << "You must enter a number, and that number must be positive.  Please try again. " << endl; //Error message
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nEnter a number:  "; //Prompt
			cin >> width;
		}
	
	return width;
	}
void Geometry::setLength()
{
	length = getLength(length);
}
void Geometry::setWidth()
{
	width = getWidth(width);
}
void Geometry::showData(float showPerimeter,float showArea)
{
	cout << "The perimeter is " << showPerimeter << endl << "The area is " << showArea << endl;

	}

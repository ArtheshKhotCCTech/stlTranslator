#pragma once

class Point 
{
	// Initialize x, y, z
	int x = 0;
	int y = 0;
	int z = 0;

public:
	Point();
	~Point();
	void setPoints(int,int,int);  // Sets x, y, z values
	// Getter of x, y, z
	int getX();
	int getY();
	int getZ();
};

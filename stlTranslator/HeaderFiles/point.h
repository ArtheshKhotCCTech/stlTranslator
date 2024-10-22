#pragma once

class Point {
	int x = 0;
	int y = 0;
	int z = 0;

public:
	Point();
	void setPoints(int,int,int);
	int getX();
	int getY();
	int getZ();
	~Point();
};

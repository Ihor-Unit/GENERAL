#pragma once
#include <vector>
#include "Canvas.h"

class Point {
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	int x;
	int y;
};



class Figure{
public:
	Figure(Point position);

	void Update(double dt);
	void Draw(Canvas& canvas);
	void MoveR();
	void MoveL();

	const std::vector<Point>& GetBody() const;
	Point GetPosition() const;
private:
	Point m_Position;
	double m_TimeFromLastUpdate = 0;
	std::vector<Point> m_Body;
};


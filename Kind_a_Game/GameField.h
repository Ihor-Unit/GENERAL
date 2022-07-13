#pragma once
#include "Canvas.h"
#include "Figure.h"

class GameField{
public:
	void Resieze(int width, int height);
	void Draw(Canvas& canvas);
	bool HasCollision(const Figure& figure);
private:
	int	m_Width;
	int m_Height;
};


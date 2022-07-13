#pragma once
#include "Game.h"
#include "GameField.h"
#include "Canvas.h"
#include "Figure.h"

class Tetris : public Game	{
public:
	Tetris();
	void OnKeyPressed(int btnCode) override;
	void Update(double) override;
	bool End() override;
private:
	GameField m_GameField;
	Canvas m_Canvas;
	Figure m_Figure;
};


#include "Tetris.h"

Tetris::Tetris() : m_Figure(Point(5, 1)) {
	m_GameField.Resieze(14, 26); //1-ширина, 2-висота
	m_Canvas.Resize(26, 14);
}

void Tetris::OnKeyPressed(int btnCode){
	switch (btnCode)
	{
	case 75:
		m_Figure.MoveL();
		break;
	case 77:
		m_Figure.MoveR();
		break;
	default:
		break;
	}
}

void Tetris::Update(double dt){
	m_Figure.Update(dt);
	m_Canvas.Clear();

	m_GameField.Draw(m_Canvas);
	m_Figure.Draw(m_Canvas);
	m_Canvas.Render();
}

bool Tetris::End(){

	return false;
}



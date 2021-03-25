#include "Figure.h"

Figure::Figure()
{}

Figure::Figure(char _color)
{
	color = _color;
}

void Figure::set_name(string name)
{}

string Figure::get_name() const
{
	return name;
}

void Figure::set_symbol(char _symbol)
{
	symbol = _symbol;
}
char Figure::get_symbol() const
{
	return symbol;
}

void Figure::set_color(char _color)
{
	color = _color;
}
char Figure::get_color() const
{
	return color;
}

void Figure::set_first_move(bool _move)
{
	first_move = _move;
}
bool Figure::get_first_move() const
{
	return first_move;
}

int Figure::get_king_position_row() const
{
	return king_position_row;
}
void Figure::set_king_position_row(int new_position)
{
	king_position_row = new_position;
}
int Figure::get_king_position_col() const
{
	return king_position_col;
}
void Figure::set_king_position_col(int new_position)
{
	king_position_col = new_position;
}
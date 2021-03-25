#include "Pawn.h"

Pawn::Pawn()
{
	name = "Pawn";
	color = 'x';
	symbol = 'x';
	first_move = false;
}

Pawn::Pawn(char _color)
{
	first_move = false;
	name = "Pawn";

	color = _color;
	if (color == 'w') 
	{
		symbol = 'P';
	}
	else 
	{
		symbol = 'p';
	}		

}

string  Pown::get_name() const
{
	return name;
}

void Pawn::set_name(string _name)
{
	name = _name;
}

void Pawn::set_symbol(char _symbol)
{
	symbol = _symbol;
}
char Pawn::get_symbol() const
{
	return symbol;
}

void Pawn::set_color(char _color)
{
	color = _color;
	//color = _color;
	
	if (color == 'w')
	{
		symbol = 'P';
	}
	else
	{
		symbol = 'p';
	}
}
char Pawn::get_color() const
{
	return color;
}

void Pawn::first_set_move(bool _move)
{
	first_move = _move;
}
bool Pawn::first_get_move() const
{
	return first_move;
}
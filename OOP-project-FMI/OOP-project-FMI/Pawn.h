#pragma once
#include "Figure.h"

class Pawn : public Figure
{
public:
	Pawn();
	//only the color
	// after this - the result will be either "p" or "P"
	Pawn(char _color);

	string  get_name() const;
	void    set_name(string _name);

	void    set_symbol(char _symbol);
	char    get_symbol() const;

	void    set_color(char _color);
	char    get_color() const;

	void    first_set_move(bool _move);
	bool    first_get_move() const;
};


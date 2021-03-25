#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figure {
protected:
	string name;
	char symbol;
	char color;
	bool first_move;
	int  king_position_row;
	int  king_position_col;

public:
	Figure();
	Figure(char _color);

	virtual void set_name(string name);
	virtual string  get_name() const;

	virtual void set_symbol(char symbol);
	virtual char get_symbol() const;

	virtual void set_color(char color);
	virtual char get_color() const;

	virtual void set_first_move(bool move);
	virtual bool get_first_move() const;

	virtual int get_king_position_row() const;
	virtual void set_king_position_row(int new_position);
	
	virtual int get_king_position_col() const;
	virtual void set_king_position_col(int new_position);
};
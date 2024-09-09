#pragma once
#include<iostream>

using namespace std;


class Player {
	static int count;
    int Player_Id;
	char * Player_name;
	int wk;
	int run;
	int inning;

public:

	Player();
	Player( const char*, int, int, int);
	void Display();
	void Accept(const char*, int, int, int);
	void maxRun(Player p[]);
	void maxWk(Player p[]);
	int getRun();
	int getWk();
	~Player();

};

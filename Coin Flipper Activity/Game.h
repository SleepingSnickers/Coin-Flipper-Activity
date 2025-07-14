#ifndef GAME
#define GAME

#include "Coin.h"

#include <iostream>

using namespace std;

class Game {
private:
	Coin* coins;
	int numberOfCoins;
	double targetBalance;
	double totalScore;
	int rounds;


public:
	Game();
	Game(double);
	~Game();
	void printFlipResults();
	void flipCoins();
	void printScore();
	int getRounds();
	int getScore();
	void playGame();
	void setCoins(Coin*);
};


#endif
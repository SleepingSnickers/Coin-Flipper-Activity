#include "Game.h"
#include <iostream>
#include <string>

using namespace std;

void Game::setCoins(Coin* moreCoin) {
	coins = moreCoin;
}

Game::Game() : targetBalance(1.00) {
	numberOfCoins = 3;

	Coin* tempCoins = new Coin[3]{
		Coin(5),
		Coin(10),
		Coin(25)
	};

	coins = tempCoins;
	int totalScore = 0;
	int rounds = 0;
}

Game::Game(double target) : targetBalance(target) {

}

Game::~Game() {
	delete[] coins;
}

void Game::printFlipResults() {
	for (int i = 0; i < numberOfCoins; i++) {
		cout << coins[i].getSideUp() << endl;
		cout << " + value = " + to_string(coins[i].getCentValue()) << endl;
	}
}

void Game::flipCoins() {
	for (int i = 0; i < 3; i++) {
		coins[i].flip();
	}
}

void Game::printScore() {

}

int Game::getRounds() {
	return rounds;
}

int Game::getScore() {
	return totalScore;
}

void Game::playGame() {

}


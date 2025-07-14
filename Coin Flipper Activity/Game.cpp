#include "Game.h"
#include <iostream>
#include <string>

using namespace std;

void Game::setCoins(Coin* moreCoin) {
	coins = moreCoin;
}

Game::Game() {
	srand(time(0));
	numberOfCoins = 3;

	Coin* tempCoins = new Coin[numberOfCoins]{
		Coin(5),
		Coin(10),
		Coin(25)
	};

	targetBalance = 1.0;
	coins = tempCoins;
	totalScore = 0;
	rounds = 0;
}

Game::Game(double target) : Game() {
	targetBalance = target;
}

Game::~Game() {
	delete[] coins;
}

void Game::printFlipResults() {
	double roundTotal = 0;
	for (int i = 0; i < numberOfCoins; i++) {
		cout << coins[i].getSideUp() << endl;
		cout << " + value = " + to_string(coins[i].getCentValue()) << endl;

		//cout << coins[i].isItHeads() << endl;

		if (coins[i].isItHeads()) {
			roundTotal += (coins[i].getCentValue() * .01);
			//cout << roundTotal << endl;
		}
	}

	cout << "Your round total is: " << roundTotal << endl;
	totalScore += roundTotal;
	cout << "Your game total is: " << totalScore << endl;

}

void Game::flipCoins() {
	for (int i = 0; i < numberOfCoins; i++) {
		coins[i].flip();
	}
}

void Game::printScore() {
	cout << "Score: " << to_string(getScore()) << endl;
}

int Game::getRounds() {
	return rounds;
}

int Game::getScore() {
	return totalScore;
}

void Game::playGame() {
	cout << "Welcome to the Coin Flipper! How will Lady Luck treat you?" << endl;

	for (int i = 1; totalScore < targetBalance; i++) {
		flipCoins();
		printFlipResults();
		rounds++;
	}

	cout << "It took you " << rounds << " to get to $" << targetBalance << endl;
}


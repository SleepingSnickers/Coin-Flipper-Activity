#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Coin.h"
#include "Game.h"

using namespace std;

int main() {
	srand(time(0));
	
	Game myGame;
	myGame.playGame();

	//Part One
	//
	//Coin coin;
	//int heads = 0;
	//int tails = 0;

	//Coin* coinArray = new Coin[20];
	//for (int i = 0; i < 20; i++) {
	//	coinArray[i].flip();
	//	if (coinArray[i].getSideUp() == "Heads") {
	//		heads = heads + 1;
	//	}
	//	else {
	//		tails = tails + 1;
	//	}
	//	//cout << coinArray[i].getSideUp() << endl;
	//}

	//cout << "Heads: " << heads << endl;
	//cout << "Tails: " << tails << endl;

	return 0;
}
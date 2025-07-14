#include "Coin.h"

Coin::Coin() : centValue(1), isHeads(1) {

}

Coin::Coin(int value) : centValue(value) {

}

void Coin::flip() {
	isHeads = rand() % 2 + 1;
}

const bool Coin::isItHeads() {
	return isItHeads;
}

const string Coin::getSideUp() {
	if (isHeads == 1) {
		return "Heads";
	}
	else {
		return "Tails";
	}
}

const int Coin::getCentValue() {
	return centValue;
}
#include "Coin.h"

using namespace std;

Coin::Coin() : centValue(1), isHeads(true) {

}

Coin::Coin(int value) : centValue(value) {
	isHeads = true;
}

void Coin::flip() {
	isHeads = rand() % 2;
}

bool Coin::isItHeads() const {
	return isHeads;
}

string Coin::getSideUp() const {
	if (isHeads) {
		return "Heads";
	}
	else {
		return "Tails";
	}
}

int Coin::getCentValue() const {
	return centValue;
}
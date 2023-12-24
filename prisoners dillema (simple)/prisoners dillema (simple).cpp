#include<iostream>
struct players {
 int player1{};
	int player2{};
};
void game(int player1, int player2,players& score) {
	
	if (player1 == 0 && player2 == 0) {
		score.player1 += 1;
		score.player2 += 1;
	}
	else if(player1 == 1 && player2 == 0) {
		score.player2 += 5;
	}
	else if (player1 == 0 && player2 == 1) {
		score.player1 += 5;
	}
	else if (player1 == 1 && player2 == 1) {
		score.player1 += 3;
		score.player2 += 3;
	}

}
int mrnice() {
	return 1;
}
int nasty() {
	static int currentValue = 0;
	currentValue = 1 - currentValue; 
	return currentValue;
}

int main() {
	players score{};
	for (int i = 0; i < 100; i++) {
		game(mrnice(), nasty(), score);
	}
	std::cout << "player1 : "<<score.player1<<'\n';
	std::cout << "player2 : "<<score.player2<<'\n';
}
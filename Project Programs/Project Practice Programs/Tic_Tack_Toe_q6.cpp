//tick-tac-toe
#include <iostream>
#include <cstdlib>
using namespace std;
const int Index_1(3), Index_2(3);
//starts the board up
void intializeGame (char a[][Index_2]){
	int space = 49;
	for (int i=0; i<Index_1;i++){
		for (int j=0; j<Index_2; j++){
			a[i][j] = char(space);
			space++;
		}
	}
}//shows the board displayed
void displayBoard (char a[][Index_2]){
	for (int i=0; i<Index_1;i++){
		cout << "\t\t\t\t\t\t\t";
		for (int j=0; j<Index_2; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
} //stimulates a game being played
//checks if board is full
bool checkFull (const char a[][Index_2]){
	
	for (int i=0; i<Index_1;i++){
		for (int j=0; j<Index_2; j++){
			if ((a[i][j] != 'X' && a[i][j] != 'O'))
				return true;
		}
	}
	cout << "Board is full. Game over.\n";
	exit(1);
}//checks if player has won yet
void didjaWin(const char a[][Index_2], char TOE, int playerNum){
	for (int i=0; i<Index_1;i++){
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2]){
			cout << "Player " << playerNum << " Wins!\n";
			exit(1);
		}
		if (a[0][i] == a[1][i] && a[1][i] == a[2][i]){
			cout << "Player " << playerNum << " Wins!\n";
			exit(1);	
		}
	}
	if (a[0][0] == a[1][1] && a[1][1] == a[2][2]){
		cout << "Player " << playerNum << " Wins!\n";
		exit(1);	
	}
	if(a[0][2] == a[1][1] && a[1][1] == a[2][0]){
		cout << "Player " << playerNum << " Wins!\n";
		exit(1);	
	}
}//stimulates a players turn
bool playerTurn (char a[][Index_2], char selection, char TICK_TACK){
	if (int(selection) < 49 || int(selection) > 57){
		cout << "Invalid selection. Try again.\n";
		return false;
	}
	int choice = int(selection) - int('0');
	int spot = 1;
	for (int i=0; i<Index_1;i++){
		for (int j=0; j<Index_2; j++){
			if (choice == spot){
				if (a[i][j] == 'X' || a[i][j] == 'O'){
					cout << "Selection is taken. Try again.\n";
					return false;
				}else{
					a[i][j] = TICK_TACK;
					return true;
				}
			}
			spot++;
		}
	}
}
void playGame (char a[][Index_2]){
	char selection;
	bool legal;
	displayBoard(a);
	while (true)
	{
		checkFull(a);
		while (true){
			cout << "Player 1 choose: "; //X's
			cin >> selection;
			if (playerTurn(a, selection,'X'))
				break;
			else
				displayBoard(a);
		}
		displayBoard(a);
		didjaWin(a,'X', 1);
		checkFull(a);
		while (true){
			cout << "Player 2 choose: "; //O's
			cin >> selection;
			if (playerTurn(a, selection,'O'))
				break;
			else
				displayBoard(a);
		}
		displayBoard(a);
		didjaWin(a,'O',2);
	}
}
int main(){
	char game[Index_1][Index_2];
	intializeGame(game);
	playGame(game);
	return 0;
}

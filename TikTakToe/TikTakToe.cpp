#include <iostream>

class TicTacToe
{
private:
    char a[9] = { '1','2','3','4','5','6','7','8','9' };
    int player;
    int choice = 0;

public:

	void CreateBoard() 
	{
		std::cout << "\t\t\t   <TIC TAC TOE>" << std::endl << std::endl;
		std::cout << "\t\t\tWelcome to the game!!!!!" << std::endl << std::endl << std::endl;
		std::cout << "\t\t\t _________________" << std::endl;
		std::cout << "\t\t\t|_________________|" << std::endl;
		std::cout << "\t\t\t|  " << a[0] << "  |  " << a[1] << "  |  " << a[2] << "  |" << std::endl;
		std::cout << "\t\t\t|_________________|" << std::endl;
		std::cout << "\t\t\t|  " << a[3] << "  |  " << a[4] << "  |  " << a[5] << "  |" << std::endl;
		std::cout << "\t\t\t|_________________|" << std::endl;
		std::cout << "\t\t\t|  " << a[6] << "  |  " << a[7] << "  |  " << a[8] << "  |" << std::endl;
		std::cout << "\t\t\t|_________________|" << std::endl;
	}

	void PlayerOneInput()
	{
		std::cout << "Player 1 Turn: ";
		std::cin >> choice;
	}

	void PlayerTwoInput()
	{
		std::cout << "Player 2 Turn: ";
		std::cin >> choice;
	}

	void XPosition()
	{
		if (choice == 1 && a[0] != 'X' && a[0] != '0') {
			a[0] = 'X';
		}
		else if (choice == 2 && a[1] != 'X' && a[1] != '0') {
			a[1] = 'X';
		}
		else if (choice == 3 && a[2] != 'X' && a[2] != '0') {
			a[2] = 'X';
		}
		else if (choice == 4 && a[3] != 'X' && a[3] != '0') {
			a[3] = 'X';
		}
		else if (choice == 5 && a[4] != 'X' && a[4] != '0') {
			a[4] = 'X';
		}
		else if (choice == 6 && a[5] != 'X' && a[5] != '0') {
			a[5] = 'X';
		}
		else if (choice == 7 && a[6] != 'X' && a[6] != '0') {
			a[6] = 'X';
		}
		else if (choice == 8 && a[7] != 'X' && a[7] != '0') {
			a[7] = 'X';
		}
		else if (choice == 9 && a[8] != 'X' && a[8] != '0') {
			a[8] = 'X';
		}
		else {
			CreateBoard();
			std::cout << "Invalid Choice! Please try again\n";
			PlayerOneInput();
			system("CLS");
			XPosition();
		}
	}

	void OPosition() 
	{
		if (choice == 1 && a[0] != 'X' && a[0] != 'O') {
			a[0] = 'O';
		}
		else if (choice == 2 && a[1] != 'X' && a[1] != 'O') {
			a[1] = 'O';
		}
		else if (choice == 3 && a[2] != 'X' && a[2] != 'O') {
			a[2] = 'O';
		}
		else if (choice == 4 && a[3] != 'X' && a[3] != 'O') {
			a[3] = 'O';
		}
		else if (choice == 5 && a[4] != 'X' && a[4] != 'O') {
			a[4] = 'O';
		}
		else if (choice == 6 && a[5] != 'X' && a[5] != 'O') {
			a[5] = 'O';
		}
		else if (choice == 7 && a[6] != 'X' && a[6] != 'O') {
			a[6] = 'O';
		}
		else if (choice == 8 && a[7] != 'X' && a[7] != 'O') {
			a[7] = 'O';
		}
		else if (choice == 9 && a[8] != 'X' && a[8] != 'O') {
			a[8] = 'O';
		}
		else {
			CreateBoard();
			std::cout << "Invalid Choice! Please try again\n";
			PlayerTwoInput();
			system("CLS");
			OPosition();
		}
	}


	

	bool Player1WinCondition() 
	{
		if ((a[0] == 'X' && a[1] == 'X' && a[2] == 'X') 
			|| (a[3] == 'X' && a[4] == 'X' && a[5] == 'X') 
			|| (a[6] == 'X' && a[7] == 'X' && a[8] == 'X') 
			|| (a[0] == 'X' && a[3] == 'X' && a[6] == 'X') 
			|| (a[1] == 'X' && a[4] == 'X' && a[7] == 'X') 
			|| (a[2] == 'X' && a[5] == 'X' && a[8] == 'X') 
			|| (a[6] == 'X' && a[4] == 'X' && a[2] == 'X') 
			|| (a[0] == 'X' && a[4] == 'X' && a[8] == 'X')) 
		{
			return true;
		}
		return false;
	}

	bool Player2WinCondition() 
	{
		if ((a[0] == 'O' && a[1] == 'O' && a[2] == 'O')
			|| (a[3] == 'O' && a[4] == 'O' && a[5] == 'O')
			|| (a[6] == 'O' && a[7] == 'O' && a[8] == 'O')
			|| (a[0] == 'O' && a[3] == 'O' && a[6] == 'O')
			|| (a[1] == 'O' && a[4] == 'O' && a[7] == 'O')
			|| (a[2] == 'O' && a[5] == 'O' && a[8] == 'O')
			|| (a[6] == 'O' && a[4] == 'O' && a[2] == 'O')
			|| (a[0] == 'O' && a[4] == 'O' && a[8] == 'O'))
		{
			return true;
		}
		return false;
	}

	void DrawGame() {
		int count = 0;
		for (int i = 0; i < 9; ++i)
		{
			if (a[i] != 'X' && a[i] != 'O') 
			{
				count++;
			}
		}
		if (count == 1) {
			std::cout << "This game is a \"Draw\"";
		}
	}
};


int main()
{
	char restartGameCharacter = 0;
	bool restartGameCondition = 0;

	do
	{
		bool winner;
		TicTacToe player;

		player.CreateBoard();

		for (int i = 0; i < 8; ++i)
		{
			if (i % 2 == 0)
			{
				player.PlayerOneInput();
				system("CLS");
				player.XPosition();
				player.CreateBoard();
				winner = player.Player1WinCondition();
				if (winner == true)
				{
					std::cout << "Player 1 wins!\n";
					break;
				}
			}

			if (i % 2 != 0)
			{
				player.PlayerTwoInput();
				system("CLS");
				player.OPosition();
				player.CreateBoard();
				winner = player.Player2WinCondition();
				if (winner == true)
				{
					std::cout << "Player 2 wins!\n";
					break;
				}
			}

			player.DrawGame();
		}

		std::cout << "Would you like to play again. Y/N? ";
		std::cin >> restartGameCharacter;

		if (restartGameCharacter == 'y' || restartGameCharacter == 'Y')
		{
			restartGameCondition = true;
			restartGameCharacter = 0;
		}
		else
		{
			restartGameCondition = false;
			restartGameCharacter = 0;
		}

		system("CLS");
	} while (restartGameCondition);
	



	return 0;
}


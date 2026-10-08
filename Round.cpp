#include <iostream>

using namespace std;

struct Round
{
	int roundNumber;
	int player1Score;
	int player2Score;
	Round(int round, int p1Score, int p2Score)
		: roundNumber(round), player1Score(p1Score), player2Score(p2Score) {}
};

strct stUser{
	int id;
	string name;
	string email;
	stUser(int userId, string userName, string userEmail)
		: id(userId), name(userName), email(userEmail) {
	}
}

int main()
{
	Round round1(1, 10, 20);
	cout << "Round: " << round1.roundNumber << ", Player 1 Score: " << round1.player1Score << ", Player 2 Score: " << round1.player2Score << endl;
	
	cout << "Color: " << color << endl;
	return 0;
}
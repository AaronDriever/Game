/*
Game a textbase RPG
by Aaron Driever

*/

#include <iostream>

using namespace std;









int main(){


	cout << "You wake up in an empty room.\n";
	cout << "The room is empty, with only a single table in the center.\n";
	cout << "\n";
	cout << "You get up and walk to the table\n";
	cout << "On the table are two pills and a sign that reads\"Pick one\"\n";
	cout << "You now have your first decission:\n";
	cout << "\n";

	int selection;
	cout << "Take the blue pill or take the red?\n";
	cin >> selection;


	if (selection <= 1){
		cout << "You swallowed the blue pill.\n";
		cout << "You wake up to find yourself at your desk and\n";
		cout << "continue with you mundane existance.\n";
		cout << "\nGame Over!\n\n";

		return 0;
	}

	else {
		cout << "You swallowed the red pill.\n";
		cout << "Nothing happened.\n";
	}

	int door;
	cout << "In front of you are two doors, which door will you take?";
	cin >> door;

	return 0;
}
/*

	*/
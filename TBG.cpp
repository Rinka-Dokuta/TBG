#include<iostream>

using namespace std;

void MonsterGen(); //declaration

int main() {

	int room = 1;
	char direction;

	while (1) {
		switch (room) {
		case 1:
			cout << "you're in room 1, you can go (E)ast" << endl;
			cin >> direction;
			if (direction == 'E')
				room = 2;
			break;

		case 2:
			MonsterGen(); //Function call
			cout << "you're in room 2, you can go (W)est, (N)orth, or (S)outh" << endl;
			cin >> direction;
			if (direction == 'W')
				room = 1;
			if (direction == 'N')
				room = 3;
			if (direction == 'S')
				room = 4;
			break;
		case 3:
			MonsterGen();
			cout << "you're in room 3, you can go (S)outh" << endl;
			cin >> direction;
			if (direction == 'S')
				room = 2;
			break;
		case 4:
			MonsterGen();
			cout << "you're in room 4 you can go (N)orth or (E)ast" << endl;
			cin >> direction;
			if (direction == 'N')
				room = 2;
			if (direction == 'E')
				room = 5;
			break;
		case 5:
			MonsterGen();
			cout << "you're in room 5 you can go (W)est or (E)ast" << endl;
			cin >> direction;
			if (direction == 'W')
				room = 4;
			if (direction == 'E')
				room = 6;
			break;
		case 6:
			MonsterGen();
			cout << "you're in room 6, you can go (W)est or (N)orth" << endl;
			cin >> direction;
			if (direction == 'W')
				room = 5;
			if (direction =='N')
				room = 7;
			break; 
		case 7:
			MonsterGen();
			cout << "you're in room 7, you can go (S)outh or (N)orth" << endl;
			cin >> direction;
			if (direction == 'S')
				room = 6;
			if (direction == 'N')
				room = 8;
			break;
		case 8:
			MonsterGen();
			cout << "you're in room 8, you can go (S)outh or (E)ast" << endl;
			cin >> direction;
			if (direction == 'S')
				room = 7;
			if (direction == 'E')
				room = 9;
			break;
		case 9:
			MonsterGen();
			cout << "you're in room 9, you can go (W)est or (E)ast" << endl;
			cin >> direction;
			if (direction == 'W')
				room = 8;
			if (direction == 'E')
				room = 10;
			break;
		case 10:
			MonsterGen();
			cout << "you're in room 10, you can go (W)est" << endl;
			cin >> direction;
			if (direction == 'W')
				room = 9;
			break;
		}//end of switch
	}//end of gameloop
}//end of main





void MonsterGen() { //definition
	int num = rand() % 100; //creates a number between 1-100
	if (num < 15) //15% chance of Slime
		cout << "A Slime appeared!" << endl;
	else if (num < 20) //5% chance of Alien
		cout << "A Alien appeared!" << endl;
	else if (num < 50) //30% chance of Alien spider
		cout << "A Alien spider appeared!" << endl;
	else if (num < 75) //25% chance of Queen Alien
		cout << "!WARNING! A QUEEN ALIEN APPEARED!" << endl;
	else //40% chance
		cout << "Nothing appeared." << endl;



}

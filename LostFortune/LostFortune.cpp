#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int gold = 913;
	string leader;
	int adventurers;
	int killed;
	int survivors;

	cout << "Welcome to Lost Fortune!" << endl;
	cout << "Please enter name of leader: ";
	getline(cin, leader);
	cout << "Please enter number of adventurers: ";
	cin >> adventurers;
	cout << "Please enter number of adventurers killed: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "A brave group of " << adventurers << " set out on a quest";
	cout << " -- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was lead by the legendary rouge named " << leader << "." << endl;
	cout << "Along the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravly under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventures, " << killed << " were vanquished, ";
	cout << " leaving just " << survivors << " in the group." << endl << endl;
	cout << "The party was about to give up all hope. ";
	cout << "But while laying the deceaced to rest, the stumble upon a buried fortune. ";
	cout << "So the adventurers split " << gold << " gold pieces." << endl;
	cout << leader << " held on to the extra " << (gold % survivors);
	cout << " pieces to keep things fair of course." << endl;

	system("pause");

	return 0;
}
//Program: Game
//Name: Trevor Troxel
//Date: 10/4/2017
//Class and Section: CS171-3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, ans;
	//cout << boolalpha;
	cout << "Enter your name" << endl;
	cin >> name;
	if (name == "error")
	{
		cout << "I AM ERROR" << endl;
		cout << "you win" << endl;
		return 0;
	}
	else if (name == "Corrin")
	{
		cout << "You choose to SMASH" << endl;
		cout << "you win" << endl;
		return 0;
	}
	else
	{
		cout << "Your at a crossroad, and two guards show up." << endl;
		cout << "Guard 1: So we meet again, " << name << ". It's been a while has it not?" << endl;
		cout << "You are confused by it's statement because you have never been here in the first place" << endl;
		cout << "but you go with it, in fear that you might die by their hands" << endl;
		cout << "Gaurd 2: One of us lies, the other tell the truth, but we are always honest. What are we?" << endl;
		cout << "You are baffled by this, and you start to think about the answers that might be possible." << endl;
		cout << "You think that there are only a couple of options that this could be:\n";
		cout << "You think it is either (T)wins or (F)riends\n";
		cin >> ans;
	}
	if (ans == "T")
	{
		cout << "Gaurd 1: You are correct, go to the path on your left.\n";
		cout << "As you leave you can faintly hear the mumbles between the two gaurds, but you can't make out what it is.\n";
		cout << "\n";
	}
	else (ans == "F")
	{
		cout << "Gaurd 2: You are correct, go to the path on your right.\n";
		cout << "As you leave you can faintly hear the mumbles between the two gaurds, but you can't make out what it is.\n";
	}
	}
	

// Game.cpp : Defines the entry point for the console application.
//Program: Game
//Name: Trevor Troxel
//Date: 10/4/2017
//Class and Section: CS171-3
//cout << "\n";
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, ans, weapon;
	//cout << boolalpha;
	cout << "Enter your name" << endl;
	cin >> name;
	if (name == "error")
	{
		cout << "01001001 00100000 01000001 01001101 00100000 01000101 01010010 01010010 01001111 01010010" << endl;
		cout << "01011001 01001111 01010101 00100000 01010111 01001001 01001110" << endl;
		return 0;
	}
	else if (name == "Corrin")
	{
		cout << "You choose to SMASH" << endl;
		cout << "You Win" << endl;
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
    if (ans == "griffondor")
		{
			cout << "+10 Points\n";
			return 0;
		}
	else if (ans == "T")
	{
		cout << "Gaurd 1: You are correct, go to the path on your left.\n";
		cout << "As you leave you can faintly hear the mumbles between the two gaurds, but you can't make out what it is.\n\n";
		cout << "As you walk down the path, you hear all kinds of weird noises. It sounds like metal bashing together.\n";
		cout << "After walking down the road for a while, you arrive at an old house and find it to be full of stuff from the ages of knights.\n";
		cout << "You find sheilds, swords, lances, axes, tomes, and other things like that.\n";
		cout << "After looking around for a while you find a old journal labled Stephanie, which was your mothers name.\n";
		cout << "Before you have time to pounder why this would be here, you hear angry looking people coming this way and they are not happy.\n";
		cout << "You decided to grab one of the weapons laying around. Which do you choose?\n";
		cin >> weapon;

		if (weapon == "sword" || weapon == "lance" || weapon == "axe")
		{
			cout << "You picked up the " << weapon << " and get ready to take on the angry mob.\n" ;
			cout << "The mob charges and you quickly start hacking and slashing away.\n";
			cout << "After a while, the remaining people run away in terror.\n";
			cout << "Before you can even think about what had just happened, someone or something comes from the shadows and knocks you out.\n";
			cout << "After waking up from being knocked, you see a woman with what looks like to be a staff of some kind.\n";
			cout << "It's letting out some form of what look like sparkles, but you feel invigorated again.\n";
			cout << "Mystery girl: It seems like your awake. Sorry for knocking you out, but you cant be too careful with people today.\n";
			cout << name << ": I appreciate the help, but who are you?\n";
			cout << "Mystery girl: A girl has to have some secrets. What I can tell you however, is that I am some one you know.\n";
			cout << name << ": what do you mean by that? I don't have a sister, I don't have girlfriend, and my mother has been dead for years now, so, no I don't know you.\n";
			cout << "Mystery girl: Maybe I hit you harder on the head than I first thought. It's alright though. Your finally home, so everything will be fine.\n";
			cout << "Before you could ask any more questions, the angry mob comes back, and this time they seem blood thirsty after what you did to them.\n";
			cout << "You grab the " << weapon << " and follow the girl out the back of the house.\n";
		}
		else if (weapon == "tome")
		{
			cout << "You pick the tome, only to relize that you have no idea how to use magic\n";
			cout << "The angry mob charges at you and die\n";
			cout << "GAME OVER\n";
		}
		else if (weapon == "sheild")
		{
			cout << "You pick up the sheild and hope that you can fend off the attackers\n";
			cout << "You are then over runned by the angry mob because you didn't have weapon to defeat them with\n";
			cout << "GAME OVER\n";
		}
		else
		{
			cout << "You couldn't pick a proper weapon and then are soon over run by the angry mob\n";
			cout << "GAME OVER\n";
		}
	}
	else if (ans == "F")
	{
		cout << "Gaurd 2: You are correct, go to the path on your right.\n";
		cout << "As you leave you can faintly hear the mumbles between the two gaurds, but you can't make out what it is.\n\n";
		cout << "As you go down a fancy road for a while, you come accros what seems to be broken, high tech kind of stuff.\n";
		cout << "After walking a bit more, you come across an advanced looking house, and inside you seem to find all kinds of fancy gear.\n";
		cout << "You find rayguns, lasers, plasma, a shoulder mounted mini-nuke launcher, and a alian-blaster.\n";
		cout << "After looking around for a while you find a high tec journal labled Nathaniel, which was your fathers name.\n";
		cout << "Before you have time to pounder why this would be here, you hear angry looking people coming this way and they are not happy.\n";
		cout << "You decided to grab one of the weapons laying around. Which do you choose?\n";
		cin >> weapon;
		if (weapon == "raygun" || weapon == "laser" || weapon == "plasma")
		{
			cout << "You picked up the " << weapon << " and get ready to take on the angry mob.\n";
			cout << "The mob charges and you quickly fireing away al the bullets it holds.\n";
			cout << "After a while, the remaining people run away in terror.\n";
			cout << "Before you can even think about what had just happened, someone or something comes from the shadows and knocks you out.\n";
			cout << "After waking up from being knocked, you see a man with what looks like to be a syringe.\n";
			cout << "It's seems to be filled with a pink liquid, but as it is being injected into your chest, you feel restoration in your body.\n";
			cout << "Mystery boy: It seems like your awake. Sorry for knocking you out, but you cant be too careful with people today.\n";
			cout << name << ": I appreciate the help, but who are you?\n";
			cout << "Mystery boy: Sorry stranger, but thats a story for another day. What I can tell you however, is that I am some one you know.\n";
			cout << name << ": what do you mean by that? I don't have a brother, I don't have any friends, and my dad has been dead for years now, so, no I don't know you.\n";
			cout << "Mystery boy: Maybe I hit you harder on the head than I first thought. It's alright though. Your finally home, so everything will be fine.\n";
			cout << "Before you could ask any more questions, the angry mob comes back, and this time they seem blood thirsty after what you did to them.\n";
			cout << "You grab the " << weapon << " and follow the girl out the back of the house.\n";
		}
		else if(weapon == "mini-nuke")
		{
			cout << "You pick up the shoulder mounted mini-nuke launcher, and when you try to fire it, it hits the door and kills you and everything\n";
			cout << "In heinz site, it did not seem like a good idea to fire a nuclear weapon of mass destruction inside a house\n";
			cout << "GAME OVER\n";
		}
		else if (weapon == "alian-blaster")
		{
			cout << "After picking it up, you feel funny. Then after that, you notice that it's leaking blue goo-gaa on your hand.\n";
			cout << "It quickly disintegrates your whole body and you turn into a pile of goo.\n";
			cout << "GAME OVER\n";
		}
		else
		{
			cout << "You couldn't pick a proper weapon and then are soon over run by the angry mob\n";
			cout << "GAME OVER\n";
		}
	}
	else
	{
		cout << "WRONG\n";
		cout << "You have died\n";
	}
	}


// Game.cpp : Defines the entry point for the console application.
//Program: Game
//Name: Trevor Troxel
//Date: 10/4/2017
//Class and Section: CS171-3

//cout << "\n";
//cout << name << "\n";
//cout << "Mystry girl:\n";
//cout << "Mystry boy:\n";

//#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, ans, weapon, dir, dir2, choice, choice2, choice3, breakfast;
	
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
	
	else if (name == "jarred" || name == "Jarred")
	{
		cout << "Ina hiki ia'oe ke ho'omaopopo i keia, maika'i\n";
		cout << "KA WIN\n";
		return 0;
	}
	
	else if (name == "Batman" || name == "Adam")
	{
		cout << "NANANANANA BATMAN\n";
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
	
	if (ans == "gryffindor")
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
		cout << "You find (sheild)s, (sword)s, (lance)s, (axe)s,  magic (tome)s, and other things like that.\n";
		cout << "After looking around for a while you find a old journal labled Stephanie, which was your mothers name.\n";
		cout << "Before you have time to pounder why this would be here, you hear angry looking people coming this way and they are not happy.\n";
		cout << "You decided to grab one of the weapons laying around. Which do you choose?\n";
		cin >> weapon;

		if (weapon == "sword" || weapon == "lance" || weapon == "axe")
		{
			cout << "You picked up the " << weapon << " and get ready to take on the angry mob.\n";
			cout << "The mob charges and you quickly start hacking and slashing away.\n";
			cout << "After a while, the remaining people run away in terror.\n";
			cout << "Before you can even think about what had just happened, someone or something comes from the shadows and knocks you out.\n";
			cout << "After waking up from being knocked, you see a woman with what looks like to be a staff of some kind.\n";
			cout << "It's letting out some form of what look like sparkles, but you feel invigorated again.\n\n";

			cout << "Mystery girl: It seems like your awake. Sorry for knocking you out, but you cant be too careful with people today.\n";
			cout << name << ": I appreciate the help, but who are you?\n";
			cout << "Mystery girl: A girl has to have some secrets. What I can tell you however, is that I am some one you know.\n";
			cout << name << ": What do you mean by that? I don't have a sister, I don't have girlfriend, and my mother has been dead for years now, so, no I don't know you.\n";
			cout << "Mystery girl: Maybe I hit you harder on the head than I first thought. It's alright though. Your finally home, so everything will be fine.\n";
			cout << "Before you could ask any more questions, the angry mob comes back, and this time they seem blood thirsty after what you did to them.\n";
			cout << "You grab the " << weapon << " and follow the girl out the back of the house.\n\n";
			cout << "You run with the girl for a while, and you wounder if you should continue (f)ollowing her or (a)bondon her\n";
			cin >> dir;
			
			if (dir == "f")
			{
				cout << "You decide to continue following the girl, not knowing what will happene.\n";
				cout << "You run for a while and end up at a little shack of sorts\n\n";
				cout << "Mystry girl: Are you alright?\n";
				cout << name << ": I .... guess..... just.. give... me a sec... to catch my breath...\n";
				cout << "Mystry girl: You remind me of him so much.\n";
				cout << name << ": Who?\n";
				cout << "Mystry girl: You really don't know, do you?\n";
				cout << name << ": Is this going to be a stupid kind of plot twist where you say that your my mother or something like that?\n";
				cout << "Mystry girl: Don't be ridiculous. Are you all right in the head?\n";
				cout << name << ": Is your name Stephanie?\n";
				cout << "Mystry girl: Nope. Just an name of a friend of mine\n\n";
				cout << "After trying to wrap your head around what is even going on anymore, you fall asleep in the mist of all of it.\n\n";
				cout << "You wake up in the dead of night, hopeing that your are out of this bizzare adventure, but you are still here.\n";
				cout << "You can't fall asleep agian, so you decide to either (f)orce your self asleep again, or go take a (w)alk:\n";
				cin >> choice2;
				
				if (choice2 == "Jojo" || choice2 == "jojo")
				{
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
				}
				
				else if (choice2 == "f")
				{
					cout << "After forcing yourself to sleep, you wake up with a massive headache.\n";
					cout << "You see the mystry boy making breakfast for himself.\n";
					cout << "Mystry girl: Ahh good your awake. We don't have much, but what would you like?\n";
					cin >> breakfast;
					cout << name << ": I would like some " << breakfast << endl;
					cout << "Mystry girl: That's so funny!, I like the same thing for breakfast to.\n";
					cout << "Before you can ask why, the mob from yesterday his headed this way, and it looks like they have more backup this time.\n";
					cout << "You grab your and get ready to fend off the incoming mob.\n";
					cout << "As the mob gets closer and closer to you, you see a hole in the wall, and you think you can fit through it.\n";
					cout << "Do you stay and help (d)efend off the mob, or go through the (h)ole in the wall?\n";
					cin >> choice3;
					
					if (choice3 == "d")
					{
						cout << "You decide to stay and help fight off the mob.\n";
					}
					
					else if (choice3 == "h")
					{
						cout << "You cut your losses and leave.\n";
					}
				}
				
				else if (choice2 == "w")
				{
					cout << "After getting out of the house, you walk around a little, hoping that you'll wake up eventually.\n";
					cout << "Before you relize you are getting more tired, you relize you are lost and can't find you way back.\n";
					cout << "What do you want to do?:\n";
					cin >> dir2;
					
					if ("dir2")
					{
						cout << "You try to " << dir2 << ", but you are not capable of doing it.\n";
						cout << "Out of no where, a pack of Werebeavers came out and eat you alive\n";
						cout << "GAME OVER\n";
					}
				}
			}
			
			else if (dir == "a")
			{
				cout << "You try and find your own way out, but then you relize that you don't even know where you are and end up getting lost\n";
				cout << "You try to decide what the best corse of action would be.\n";
				cout << "What do you do?\n";
				cin >> choice;
				
				if ("choice")
				{
					cout << "You try to " << choice << " but relize soon afterwards you have know idea what you are doing and die.\n";
					cout << "GAME OVER\n";
				}
			}
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
		
		else if (weapon == "Will-Power")
		{
			cout << "By sheer will power alone, you become Solid Snake.\n";
			cout << "You win.\n";
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
		cout << "You find (raygun)s, (laser)s, (plasma) guns, a shoulder mounted (mini-nuke) launcher, and a (alian-blaster).\n";
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
			cout << "It's seems to be filled with a pink liquid, but as it is being injected into your chest, you feel restoration in your body.\n\n";

			cout << "Mystery boy: It seems like your awake. Sorry for knocking you out, but you cant be too careful with people today.\n";
			cout << name << ": I appreciate the help, but who are you?\n";
			cout << "Mystery boy: Sorry stranger, but thats a story for another day. What I can tell you however, is that I am some one you know.\n";
			cout << name << ": What do you mean by that? I don't have a brother, I don't have any friends, and my dad has been dead for years now, so, no I don't know you.\n";
			cout << "Mystery boy: Maybe I hit you harder on the head than I first thought. It's alright though. Your finally home, so everything will be fine.\n";
			cout << "Before you could ask any more questions, the angry mob comes back, and this time they seem blood thirsty after what you did to them.\n";
			cout << "You grab the " << weapon << " and follow the boy out the back of the house.\n";
			cout << "You run with the boy for a while, and you wounder if you should continue (f)ollowing her or (a)bondon him\n";
			cin >> dir;
			
			if (dir == "f")
			{
				cout << "You decide to continue following the boy, not knowing what will happene.\n";
				cout << "You run for a while and end up at a nice looking house of sorts\n\n";
				cout << "Mystry boy: You seem to be out of shape.\n";
				cout << name << ": I .... guess..... just.. give... me a sec... to catch my breath...\n";
				cout << "Mystry boy: You remind me of a certin lady I knew way back when.\n";
				cout << name << ": Who?\n";
				cout << "Mystry boy: You really don't have the faintest idea, do you?\n";
				cout << name << ": Is this going to be a stupid kind of plot twist where you say that your my father or something like that?\n";
				cout << "Mystry boy: What are talking about? People like you make me really question how far people are reading into things.\n";
				cout << name << ": Is your name Nathaniel?\n";
				cout << "Mystry boy: Nope. That was a name of an old friend of mine.\n\n";
				cout << "After trying to wrap your head around what is even going on anymore, you fall asleep in the mist of all of it.\n\n";
				cout << "You wake up in the dead of night, hopeing that your are out of this bizzare adventure, but you are still here.\n";
				cout << "You can't fall asleep agian, so you decide to either (f)orce your self asleep again, or go take a (w)alk:\n";
				cin >> choice2;
				
				if (choice2 == "Jojo" || choice2 == "jojo")
				{
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
					cout << "ORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORAORA\n";
				}
				
				else if (choice2 == "f")
				{
					cout << "After forcing yourself to sleep, you wake up with a massive headache.\n";
					cout << "You see the mystry boy making breakfast for himself.\n";
					cout << "Mystry boy: Ahh good your awake. I'm not the best cook, but what would you like?\n";
					cin >> breakfast;
					cout << name << ": I would like some " << breakfast << endl;
					cout << "Mystry boy: Hu. Funny. Thats actully my favorite thing to have for breakfast.\n";
					cout << "Before you can ask why, the mob from yesterday his headed this way, and it looks like they have more backup this time.\n";
					cout << "You grab your weapon and get ready to fend off the incoming mob.\n";
					cout << "As the mob gets closer and closer to you, you see that the door in the back was left open, you know you can run through it.\n";
					cout << "Do you stay and help (d)efend off the mob, or go through the (h)ole in the wall?\n";
					cin >> choice3;
					
					if (choice3 == "d")
					{
						cout << "You decide to stay and help fight off the mob.\n";
					}
					
					else if (choice3 == "h")
					{
						cout << "You cut your losses and leave.\n";
					}
				}
				
				else if (choice2 == "w")
				{
					cout << "After getting out of the house, you walk around a little, hoping that you'll wake up eventually.\n";
					cout << "Before you relize you are getting more tired, you relize you are lost and can't find you way back.\n";
					cout << "What do you want to do?:\n";
					cin >> dir2;
					
					if ("dir2")
					{
						cout << "You try to " << dir2 << ", but you are not capable of doing it.\n";
						cout << "Out of no where, a pack of Werebeavers came out and eat you alive\n";
						cout << "GAME OVER\n";
					}
				}
			}
			
			else if (dir == "a")
			{
				cout << "You try and find your own way out, but then you relize that you don't even know where you are and end up getting lost\n";
				cout << "You try to decide what the best corse of action would be.\n";
				cout << "What do you do?\n";
				cin >> choice;
				
				if ("choice")
				{
					cout << "You try to " << choice << " but relize soon afterwards you have know idea what you are doing and die.\n";
					cout << "GAME OVER\n";
				}
			}
		}
		
		else if (weapon == "mini-nuke")
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
		
		else if (weapon == "Will-Power")
		{
			cout << "By sheer will power alone, you become Solid Snake.\n";
			cout << "You win.\n";
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
		cout << "GAME OVER\n";
	}
}

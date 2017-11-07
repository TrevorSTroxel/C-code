//Program name: Palindrome_integer
//Name:Trevor Troxel
//Date:11/6/2017
#include "stdafx.h"
#include <iostream>
using namespace std;
//Return the reversal of an intger,
// i.e., reverse (456) returns 654
int reverse(int input);

//Return true if number is a palindrome
bool isPalindrome(int output);

int main()
{
	int n;
	cout << "input a number.\n";
	cin >> n;
	if (isPalindrome(n))
	{
		cout << "A Palindrome\n";
	}
	else 
	{
		cout << "Not a Palindrome\n";
	}
    return 0;
}

int reverse(int input)
{
	int d = 0;
	while(input != 0)
	{
		d = (d * 10);
		d = d + input % 10;
		input = input / 10;
	}
	return d;
}

bool isPalindrome(int input)
{
	if (input == reverse(input))
	{
		return true;
	}
	else
	{
		return false;
	}
}

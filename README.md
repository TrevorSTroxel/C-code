//Program name: KmtoMiles
//Class: CS171-1
//Date: 10/16/17
//Name: Trevor Troxel

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int col, m = 0;
	cout << "Km" << setw(10) << "Miles\n";
	for (col = 1; col <= 10; col++)
	{
		//m = 0;
		m = m + 1;
		cout << m << setw(10) << m * 1.609 << endl;
	}
}

//Program name: LargestInteger
//Class: CS171-1
//Date: 10/16/17
//Name: Trevor Troxel

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	while (pow(n, 3) <= 12000)
	{
		n = n + 1;
	}
	cout << "The largest integer is " << n - 1 << endl;
}


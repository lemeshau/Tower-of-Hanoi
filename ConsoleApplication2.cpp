// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void move(char point1, char point2) {
	cout << "from point " << point1 << " to point " << point2 << endl;
}

void moveTower(int num, char point1, char point2, char point3) {
	if (num == 0) { return; }
	moveTower(num - 1, point1, point3, point2);
	move(point1, point2);
	moveTower(num - 1, point3, point2, point1);
}

int main()
{
	moveTower(4, 'a', 'b', 'c');
    return 0;
}


// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "backtrack.h"
using namespace std;


int main()
{

	Application app;
	BackTrack btr(app);

	for (int i = 0; i <= 7; i++) {
		btr.backTrack(app.getStartPosition());
	}
	cout << btr.globalcount;
	/*if (btr.backTrack(app.getStartPosition()))//backTrack返回True代表寻路成功了，最表层的backTrack返回True
		app.print();
	else
		cout << "Problem has no solution!" << endl;*/

	return 0;
}

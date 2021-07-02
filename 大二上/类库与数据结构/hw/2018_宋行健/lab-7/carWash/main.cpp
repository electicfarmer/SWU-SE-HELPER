#include "car.h"
#include "washCmp.h"
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
	srand((unsigned int)time(0));
	WashCmp cmp;
	cmp.simulation();
	cmp.printCmpStatistic();

	//srand((unsigned int)time(0));
	//cout << RAND_MAX << endl; //32767
	//double p1 = rand() / double(RAND_MAX + 1);
	//double p2 = rand() / double(RAND_MAX + 1);
	//double p3 = rand() / double(RAND_MAX + 1);

	//cout << p1 << " " << p2 << " " << p3 << endl;

	//cout << log(2.7183) << endl;
	//cout << exp(1.001) << endl;

	return 0;
}
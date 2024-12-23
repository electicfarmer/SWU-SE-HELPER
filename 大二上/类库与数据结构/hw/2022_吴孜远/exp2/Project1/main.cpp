#include <ctime>
#include <iostream>
#include "company.h"

using namespace std;

int main()
{
	//random number generation
	/*srand((unsigned int)time(0)); //seed

	cout << "Three random numbers: " << rand() << ", " << rand() << ", " << rand() << endl;
	cout << "Maximum random number: " << RAND_MAX << endl;*/


	//runtime analysis
	clock_t start_t, end_t, elapsed_t;
	int empNum = 5000;

	while (empNum <= 50000) {
		Company *cmp = new Company;
		start_t = clock();
	
		cmp->inputEmployeeHead(empNum);
		end_t = clock();

		elapsed_t = end_t - start_t; //in ticks (per second); milliseconds

		cout << "empNum:"<< empNum << " Time elapsed: " << elapsed_t << " (in ticks)" << endl;
		delete cmp;
		empNum = empNum + 5000;
	}
		

	return 0;
}
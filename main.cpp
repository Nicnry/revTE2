#include <iostream>
#include "te22016.h"
#include "te32016.h"
#include "te22018.h"
#include "te32018.h"

using namespace std;

int main() {
	{
		// TE 2016-2017
		te22016();
		te32016();
	}

	{
		// TE 2018-2019
		te22018();
		te32018();
	}
	return 0;
}

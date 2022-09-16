#include "external.h"

using namespace std;

EXTERNAL(void) TestFunc1() {
	cout << "Hello World! \n";
}

EXTERNAL(void) TestFunc2(const char* message) {
	cout << message << "\n";
}

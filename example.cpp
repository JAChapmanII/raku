#include <iostream>
using namespace std;

#include "err.hpp"

void f1();
void f2();
void f3();

int main(int argc, char **argv) {
	cout << "hello, world!" << endl;
	f1();

	return 0;
}

void f1() {
	f2();
}

void f2() {
	f3();
}

void f3() {
	throw make_except("f3 has failed");
}


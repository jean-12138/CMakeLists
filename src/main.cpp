#include <iostream>
#include "msg/msg.h"
#include <string.h>
using namespace std;

int main(int argc, char* argv[])
{
	int size = 5;
	char* array = new char[size];

	Msg msg;
	msg.setsize(size);
	msg.setarray(array);

	memcpy(array, "hello", 5);

	msg.printmsg();
	return 0;
}

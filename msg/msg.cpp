#include "msg/msg.h"

Msg::Msg()
{
	this->size = 0;
	this->array= NULL;
}

Msg::~Msg()
{
	if(this->array != NULL)
		delete[] array;

	this->size = 0;
}


int Msg::getsize()
{
	return this->size;
}

char* Msg::getarray()
{
	return this->array;
}

void Msg::setsize(int size)
{
	this->size = size;
}

void Msg::setarray(char* array)
{
	this->array = array;
}

void Msg::printmsg()
{
	std::cout << "array = " << this->array << std::endl;
	std::cout << "size  = " << this->size  << std::endl;
}

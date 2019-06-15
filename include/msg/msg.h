#ifndef _MSG_H
#define _MSG_H

#include <iostream>
using namespace std;

class Msg{
	public:
			Msg();
			
			int 	getsize();
			char* 	getarray();

			void	setsize(int size);
			void	setarray(char* array);

			void	printmsg();

			~Msg();
	private:
			int 	size;
			char*	array;

};

#endif

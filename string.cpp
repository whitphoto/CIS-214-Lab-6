#include <cstring>
#include <cstddef>
#include "string.h"

using namespace std;

String &String::append(char ch)
	{
		size_t length = strlen(ptrchars);
		char *buffer = new char[length +2];
		strcpy(buffer, ptrchars);
		buffer[length] = ch;
		buffer[length +1] = '\0';
		delete [] ptrchars;
		ptrchars = buffer;
		return *this;
		
	}

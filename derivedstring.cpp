#include <cstring>
#include <cstddef>
#include "derivedstring.h"

using namespace std;

DerivedString::DerivedString(char const string)
	{
		size_t lengh = strlen(chars);
		char ptrchars = new char [length + strlen(chars) +1];
		strcpy(buffer, ptrchars);
	
	}
	
	DerivedString &DerivedString::append(char const string)
		{
			size_t lengh = strlen(ptrchars);
			char *buffer = new char[lengh + strlen(chars) + 1];
			strcpy(buffer, ptrchars);
			strcat(buffer, chars);
			delete [] ptrchars;
			ptrchars = buffer;
			return *this;
		}

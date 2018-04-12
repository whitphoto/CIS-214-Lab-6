#ifndef DERIVED_STRING_H
#define DERIVED_STRING_H

#include "string.h"

class DerivedString : public String
	{
		public:
			DerivedString(char const *ptrchars);
			DerivedString &append(char const string);
	};

#endif

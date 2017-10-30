#include "StackV.h"


int Stack::size()
{
	return data;
}

void clear()
{
	while (data >0)
	 {
		 remove(1);
	}
}

void pop

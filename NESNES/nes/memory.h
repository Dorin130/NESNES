#pragma once
#include "shorttypes.h"

class Memory {
public:
	Memory(int);
	u8 access(bool, u16, u8);
private:
	u8* mem;
	int size;
};

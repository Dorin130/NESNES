#include "memory.h"
Memory::Memory(int _size) : size(_size) {
	mem = new u8[_size];
}
u8 Memory::access(bool wr, u16 addr, u8 val) {
	if (wr)
		mem[addr] = val;
	return *mem;
}
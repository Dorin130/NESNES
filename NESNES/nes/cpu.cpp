#include "cpu.h"
#include <iostream>
CPU::CPU() {
}
CPU::CPU(Memory* _ram) :  
	rPC(0), 
	rSP(0), 
	rA(0), 
	rX(0), 
	rY(0)
{	
	ram = _ram;
}

u8 CPU::getFlags() {
	return flags[C] | flags[Z] << 1 | flags[I] << 2 | flags[D] << 3 | 1 << 5 | flags[V] << 6 | flags[N] << 7;
}

void CPU::setFlags(u8 nFlags) {
	flags[C] = NTH_BIT(nFlags, 0);
	flags[Z] = NTH_BIT(nFlags, 1);
	flags[I] = NTH_BIT(nFlags, 2);
	flags[D] = NTH_BIT(nFlags, 3);
	flags[V] = NTH_BIT(nFlags, 6);
	flags[N] = NTH_BIT(nFlags, 7);
}

void CPU::PrintCPUInfo() {
	std::cout << "PC:"	<< std::hex << unsigned(rPC);
	std::cout << " SP:" << std::hex << unsigned(rSP) << std::endl;
	std::cout << "A:"	<< std::hex << unsigned(rA);
	std::cout << " X:"	<< std::hex << unsigned(rX);
	std::cout << " Y:"	<< std::hex << unsigned(rY) << std::endl;
	std::cout << "FLAGS:" << std::hex << unsigned(CPU::getFlags()) << std::endl;
}

int test() {
	CPU kek;
	kek.PrintCPUInfo();
	return 0;
}
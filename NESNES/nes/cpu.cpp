#include "cpu.h"
#include <iostream>

CPU::CPU() {
	rPC = 0;
	rSP = 0;
	rA = 1;
	rX = 128;
	rY = 0;
	sN = 0;
	sV = 0;
	sD = 0;
	sI = 0;
	sZ = 0;
	sC = 0;
}

CPU::~CPU() {
}

void CPU::PrintCPUInfo() {
	std::cout << "PC:"	<< std::hex << unsigned(rPC);
	std::cout << " SP:" << std::hex << unsigned(rSP) << std::endl;
	std::cout << "A:"	<< std::hex << unsigned(rA);
	std::cout << " X:"	<< std::hex << unsigned(rX);
	std::cout << " Y:"	<< std::hex << unsigned(rY) << std::endl;
	std::cout << "FLAGS:" << sN << sV << sD << sI << sZ << sC << std::endl;
}

int test() {
	CPU kek;
	kek.PrintCPUInfo();
	return 0;
}
#pragma once
#include "shorttypes.h"
#include "memory.h"
enum Flag { C, Z, I, D, V, N };
class CPU
{
public:
	CPU();
	CPU(Memory *);
	u8 getFlags();
	void setFlags(u8);
	void PrintCPUInfo();
private:
	//Memory
	Memory *ram;
	//Registers
	u16 rPC;
	u8 rSP;
	u8 rA;
	u8 rX;
	u8 rY;
	bool flags[6] = { 0 };
	/*7  bit  0
	---- ----
	NVss DIZC
	|||| ||||
	|||| |||+- Carry: 1 if last addition or shift resulted in a carry, or if
	|||| |||     last subtraction resulted in no borrow
	|||| ||+-- Zero: 1 if last operation resulted in a 0 value
	|||| |+--- Interrupt: Interrupt inhibit
	|||| |       (0: /IRQ and /NMI get through; 1: only /NMI gets through)
	|||| +---- Decimal: 1 to make ADC and SBC use binary-coded decimal arithmetic
	||||         (ignored on second-source 6502 like that in the NES)
	||++------ s: No effect, used by the stack copy, see note below
	|+-------- Overflow: 1 if last ADC or SBC resulted in signed overflow,
	|            or D6 from last BIT
	+--------- Negative: Set to bit 7 of the last operation
	*/
};

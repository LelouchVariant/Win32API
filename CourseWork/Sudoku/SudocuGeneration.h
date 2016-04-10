#pragma once

#define setBit(var, bit)    var |= 1 << bit
#define checkBit(var, bit)  var & (1 << bit)

class SudocuGeneration
{
public:
	SudocuGeneration();
	~SudocuGeneration();
		
	int generationMas(int **data);

private:
	int checkCell(int cell);	
	enum { CLEAN = -1, LINE, ROW, SECTOR };
};


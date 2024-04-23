#ifndef _NOR3_H
#define _NOR3_H

#include <fstream>

/*
  Class
/*
  Class NOR3
  -----------
  represent the 3-input OR gate
*/

#include "Gate.h"

class NOR3:public Gates
{
public:
	NOR3(const GraphicsInfo &r_GfxInfo, int r_FanOut);
	virtual void Operate();	//Calculates the output of the AND gate
	virtual void Draw(Output* pOut);	//Draws 2-input gate

	virtual void save(ofstream *outputFile); // save file


	virtual int GetOutPinStatus();	//returns status of outputpin if LED, return -1
	virtual int GetInputPinStatus(int NM);	//returns status of Inputpin # n if SWITCH, return -1

	virtual void setInputPinStatus(int NM, STATUS s);	//set status of Inputpin # n, to be used by connection class.


};

#endif
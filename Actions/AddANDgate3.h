#ifndef _ADD_AND3_GATE_H
#define _ADD_AND3_GATE_H

#include "action.h"
#include "..\Components\AND3.h"


class AddANDgate3 :	public Action
{
private:
	//Parameters for rectangular area to be occupied by the gate
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	AddANDgate3(ApplicationManager *pApp,bool isLoaded);
	~AddANDgate3(void);

	//Reads parameters required for action to execute
	void ReadActionParameters();
	//Execute action (code depends on action type)
	void Execute();

	void Undo();
	void Redo();


};

#endif
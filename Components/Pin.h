#ifndef _PIN_H
#define _PIN_H

#include "..\Defs.h"

class Pin
{
protected:
	STATUS m_Status;	//Status of the Pin
	bool isConnected;

public:
	Pin();
	void setStatus(STATUS r_Status);
	STATUS getStatus();

	bool getisConnected();	//is this input pin is connected
	void setConnected(bool);	//set input pin is connected

};

#endif
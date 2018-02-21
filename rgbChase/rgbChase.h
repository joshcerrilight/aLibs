/*
	rgbChase.h - Library for rgb color changing leds.
	Created by Josh Cerri 12/24/2017
*/

#ifndef rgbC
#define rgbC

#include "Arduino.h"

class rgbChase	
{
	public:
		rgbChase(int redOut, int grnOut, int bluOut,int dtime);
		void smooth();
		void step();
		void pulse();
		void redtowhite();
	private:
		int _redOut;
		int _grnOut;
		int _bluOut;
		int _redV;
		int _grnV;
		int _bluV;
		int _dtime;
};

#endif

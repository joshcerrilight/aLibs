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
		int dtime;
		rgbChase(int redOut1,int redOut2, int grnOut1,int grnOut2,int bluOut1, int bluOut2);
		void smooth(int dtime);
		void step(int dtime);
		void pulse(int dtime);
		void redtowhite(int dtime);
		void siren();
	private:
		int _redOut1;
		int _redOut2;
		int _grnOut1;
		int _grnOut2;
		int _bluOut1;
		int _bluOut2;
		int _redV;
		int _grnV;
		int _bluV;
		int _dtime;
};

#endif

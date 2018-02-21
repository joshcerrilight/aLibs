//This is the cpp file for rgbChase

#include "Arduino.h"
#include "rgbChase.h"

rgbChase::rgbChase(int redOut, int grnOut, int bluOut, int dtime)
{
	pinMode(redOut, OUTPUT);
	pinMode(grnOut, OUTPUT);
	pinMode(bluOut, OUTPUT);

	_redOut = redOut;
	_grnOut = grnOut;
	_bluOut = bluOut;
	_dtime=dtime;
}//close constructor

void rgbChase::smooth()
{
for(_redV=0;_redV<=255;_redV++){
	analogWrite(_redOut,_redV);
	delay(_dtime);
}
delay(_dtime);
for(_bluV=255;_bluV>=0;_bluV--){
	analogWrite(_bluOut,_bluV);
	delay(_dtime);
}
delay(_dtime);
for(_grnV=0;_grnV<=255;_grnV++){
	analogWrite(_grnOut,_grnV);
	delay(_dtime);
}
delay(_dtime);

for(_redV=255;_redV>=0;_redV--){
	analogWrite(_redOut,_redV);
	delay(_dtime);
}
delay(_dtime);
for(_bluV=0;_bluV<=255;_bluV++){
	analogWrite(_bluOut,_bluV);
	delay(_dtime);
}
delay(_dtime);
for(_grnV=255;_grnV>=0;_grnV--){
	analogWrite(_grnOut,_grnV);
	delay(_dtime);
}
}

void rgbChase::step()
{
	analogWrite(_bluOut, 0);
	analogWrite(_redOut, 255);
	delay(100*_dtime);
	analogWrite(_redOut, 0);
	analogWrite(_grnOut, 255);
	delay(100*_dtime);
	analogWrite(_bluOut, 255);
	analogWrite(_grnOut,0);
	delay(100*_dtime);
}

void rgbChase::pulse()
{
for(_redV=0;_redV<=255;_redV++){
	analogWrite(_redOut,_redV);
	analogWrite(_bluOut, 0);
	analogWrite(_grnOut, 0);
	delay(_dtime);
}
delay(2*_dtime);
for(_redV=255;_redV>=0;_redV--){
	analogWrite(_redOut,_redV);
	delay(_dtime);
}
delay(2*_dtime);
for(_grnV=0;_grnV<=255;_grnV++){
	analogWrite(_grnOut,_grnV);
	delay(_dtime);
}
delay(2*_dtime);
for(_grnV=255;_grnV>=0;_grnV--){
	analogWrite(_grnOut,_grnV);
	delay(_dtime);
}
delay(2*_dtime);
for(_bluV=0;_bluV<=255;_bluV++){
	analogWrite(_bluOut,_bluV);
	delay(_dtime);
}
delay(2*_dtime);
for(_bluV=255;_bluV>=0;_bluV--){
	analogWrite(_bluOut,_bluV);
	delay(_dtime);
}
delay(2*_dtime);
}

void rgbChase::redtowhite()
{
	analogWrite(_redOut,255);
	analogWrite(_grnOut,0);
	analogWrite(_bluOut,0);
for(_grnV=0;_grnV<=255;_grnV++){
	analogWrite(_grnOut,_grnV);
	delay(_dtime); 
}
for(_bluV=0;_bluV<=255;_bluV++){
	analogWrite(_bluOut,_bluV);
	delay(_dtime);
}
delay(10*_dtime);
for(_grnV=255;_grnV>=0;_grnV--){
	analogWrite(_grnOut,_grnV);
	delay(_dtime);
}
for(_bluV=255;_bluV>=0;_bluV--){
	analogWrite(_bluOut,_bluV);
	delay(_dtime);
}
delay(10*_dtime);
}

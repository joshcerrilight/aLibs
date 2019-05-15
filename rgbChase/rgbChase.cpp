//This is the cpp file for rgbChase

#include "Arduino.h"
#include "rgbChase.h"

rgbChase::rgbChase(int redOut1, int redOut2, int grnOut1, int grnOut2, int bluOut1, int bluOut2)
{
	pinMode(redOut1, OUTPUT);
	pinMode(redOut2, OUTPUT);
	pinMode(grnOut1, OUTPUT);
	pinMode(grnOut2, OUTPUT);
	pinMode(bluOut1, OUTPUT);
	pinMode(bluOut2, OUTPUT);	
	
	
	_redOut1 = redOut1;
	_redOut2 = redOut2;
	_grnOut1 = grnOut1;
	_grnOut2 = grnOut2;
	_bluOut1 = bluOut1;
	_bluOut2 = bluOut2;
	_dtime = dtime;
}//close constructor

void rgbChase::smooth(int _dtime)
{
for(_redV=0;_redV<=255;_redV++){
	analogWrite(_redOut1,_redV);
	analogWrite(_bluOut2,_redV);
	delay(_dtime);
}
delay(_dtime);
for(_bluV=255;_bluV>=0;_bluV--){
	analogWrite(_bluOut1,_bluV);
	analogWrite(_grnOut2,_bluV);
	delay(_dtime);
}
delay(_dtime);
for(_grnV=0;_grnV<=255;_grnV++){
	analogWrite(_grnOut1,_grnV);
	analogWrite(_redOut2,_grnV);
	delay(_dtime);
}
delay(_dtime);

for(_redV=255;_redV>=0;_redV--){
	analogWrite(_redOut1,_redV);
	analogWrite(_bluOut2,_redV);
	delay(_dtime);
}
delay(_dtime);
for(_bluV=0;_bluV<=255;_bluV++){
	analogWrite(_bluOut1,_bluV);
	analogWrite(_grnOut2,_bluV);
	delay(_dtime);
}
delay(_dtime);
for(_grnV=255;_grnV>=0;_grnV--){
	analogWrite(_grnOut1,_grnV);
	analogWrite(_redOut2,_grnV);
	delay(_dtime);
}
}

void rgbChase::step(int _dtime)
{
	analogWrite(_bluOut1, 0);
	analogWrite(_redOut1, 255);
	delay(100*_dtime);
	analogWrite(_redOut1, 0);
	analogWrite(_grnOut1, 255);
	delay(100*_dtime);
	analogWrite(_bluOut1, 255);
	analogWrite(_grnOut1,0);
	delay(100*_dtime);
}

void rgbChase::pulse(int _dtime)
{
for(_redV=0;_redV<=255;_redV++){
	analogWrite(_redOut1,_redV);
	analogWrite(_bluOut1, 0);
	analogWrite(_grnOut1, 0);
	delay(_dtime);
}
delay(2*_dtime);
for(_redV=255;_redV>=0;_redV--){
	analogWrite(_redOut1,_redV);
	delay(_dtime);
}
delay(2*_dtime);
for(_grnV=0;_grnV<=255;_grnV++){
	analogWrite(_grnOut1,_grnV);
	delay(_dtime);
}
delay(2*_dtime);
for(_grnV=255;_grnV>=0;_grnV--){
	analogWrite(_grnOut1,_grnV);
	delay(_dtime);
}
delay(2*_dtime);
for(_bluV=0;_bluV<=255;_bluV++){
	analogWrite(_bluOut1,_bluV);
	delay(_dtime);
}
delay(2*_dtime);
for(_bluV=255;_bluV>=0;_bluV--){
	analogWrite(_bluOut1,_bluV);
	delay(_dtime);
}
delay(2*_dtime);
}

void rgbChase::redtowhite(int _dtime)
{
	analogWrite(_redOut1,255);
	analogWrite(_grnOut1,0);
	analogWrite(_bluOut1,0);
for(_grnV=0;_grnV<=255;_grnV++){
	analogWrite(_grnOut1,_grnV);
	delay(_dtime); 
}
for(_bluV=0;_bluV<=255;_bluV++){
	analogWrite(_bluOut1,_bluV);
	delay(_dtime);
}
delay(10*_dtime);
for(_grnV=255;_grnV>=0;_grnV--){
	analogWrite(_grnOut1,_grnV);
	delay(_dtime);
}
for(_bluV=255;_bluV>=0;_bluV--){
	analogWrite(_bluOut1,_bluV);
	delay(_dtime);
}
delay(10*_dtime);
}

void rgbChase::siren()
{
	analogWrite(_redOut1, 255);
	delay(200);
	analogWrite(_redOut1, 0);
	delay(200);
	analogWrite(_bluOut1, 255);
	delay(200);
	analogWrite(_bluOut1, 0);
	delay(20);
	analogWrite(_redOut1, 255);
	delay(20);
	analogWrite(_redOut1, 0);
	analogWrite(_bluOut1, 255);
	delay(20);
	analogWrite(_bluOut1, 0);
	delay(200);
}

#include <stdio.h>
#include <wiringPi.h>
int main()
{
	wiringPiSetup();
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(0, OUTPUT);
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(13, OUTPUT);
	pinMode(14, OUTPUT);
	pinMode(30, OUTPUT);
	pinMode(21, OUTPUT);
	
	while(1)
	{
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(0,HIGH);
		digitalWrite(7,HIGH);
		digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
		digitalWrite(12,HIGH);
		digitalWrite(13,HIGH);
        digitalWrite(14,HIGH);
		digitalWrite(30,HIGH);
		digitalWrite(21,HIGH);
		delay(100);
		digitalWrite(8,LOW);
		digitalWrite(9,LOW);
		delay(100);
		digitalWrite(2,LOW);
		digitalWrite(8,HIGH);
		digitalWrite(9,HIGH);
	    digitalWrite(7,LOW);
		delay(100);
		digitalWrite(3,LOW);
		digitalWrite(2,HIGH);
		digitalWrite(0,LOW);
		digitalWrite(7,HIGH);
		delay(100);
		digitalWrite(12,LOW);
		digitalWrite(3,HIGH);
		digitalWrite(9,LOW);
		digitalWrite(0,HIGH);
		delay(100);
		digitalWrite(13,LOW);
		digitalWrite(12,HIGH);
		digitalWrite(7,LOW);
		digitalWrite(9,HIGH);
		delay(100);
		digitalWrite(14,LOW);
		digitalWrite(13,HIGH);
		digitalWrite(0,LOW);
		digitalWrite(7,HIGH);
		delay(100);
		digitalWrite(30,LOW);
		digitalWrite(14,HIGH);
		digitalWrite(9,LOW);
		digitalWrite(0,HIGH);
		delay(100);
		digitalWrite(21,LOW);
		digitalWrite(30,HIGH);
		digitalWrite(7,LOW);
		digitalWrite(9,HIGH);
		delay(100);
		
	}
	return 0;
}

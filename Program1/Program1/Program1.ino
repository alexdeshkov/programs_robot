/*
 Name:		Program1.ino33
 Created:	10/31/2019 6:19:36 PM
 Author:	POLYGONTeam
*/

#define PIN_BTN_2 2
#define PIN_BTN_3 3
#define PIN_LED_BL 4
#define PIN_LED_RD 5

int Btn2State_g = 0;
int Btn3State_g = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(PIN_BTN_2, INPUT_PULLUP);
	pinMode(PIN_BTN_3, INPUT_PULLUP);
	pinMode(PIN_LED_BL, OUTPUT);
	pinMode(PIN_LED_RD, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	Btn2State_g = digitalRead(PIN_BTN_2);
	Btn3State_g = digitalRead(PIN_BTN_3);

	if (Btn2State_g == LOW && Btn3State_g == LOW)
	{
		digitalWrite(PIN_LED_BL, HIGH);
	}
	else
	{
		digitalWrite(PIN_LED_BL, LOW);
	}

	if (Btn2State_g == LOW || Btn3State_g == LOW)
	{
		digitalWrite(PIN_LED_RD, HIGH);
	}
	else
	{
		digitalWrite(PIN_LED_RD, LOW);
	}

}

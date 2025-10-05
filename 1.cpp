int xPin = A0;
int yPin = A1;
int buttonPin = 2;
int upLed = 10;
int downLed = 7;
int leftLed = 4;
int rightLed = 12;
boolean laststate = false;
boolean currentstate = false;
void setup()
{
    Serial.begin(9600);
    pinMode(xPin, INPUT);
    pinMode(yPin, INPUT);
    digitalRead(buttonPin);
}

void loop()
{
    int xVal = analogRead(xPin);
    int yVal = analogRead(yPin);
    int button = digitalRead(buttonPin);

    int upbrightness = map(yVal, 480, 0, 0, 255);
    int downbrightness = map(yVal, 515, 1023, 0, 255);
    int leftbrightness = map(xVal, 480, 0, 0, 255);
    int rightbrightness = map(xVal, 515, 1023, 0, 255);

    if (yVal < 480)
        analogWrite(upLed, upbrightness);
    if (yVal > 515)
        analogWrite(downLed, downbrightness);
    if (xVal < 480)
        analogWrite(leftLed, leftbrightness);
    if (xVal > 515)
        analogWrite(rightLed, rightbrightness);

    if (yVal > 480 && yVal < 515 && xVal > 480 && xVal < 515)
    {
        digitalWrite(upLed, LOW);
        digitalWrite(downLed, LOW);
        digitalWrite(leftLed, LOW);
        digitalWrite(rightLed, LOW);
    }
}
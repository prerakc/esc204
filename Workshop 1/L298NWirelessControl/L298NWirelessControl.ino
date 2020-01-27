//Motor Connections
#define EnA 9
#define EnB 10
#define In1 4
#define In2 5
#define In3 6
#define In4 7

char val = 0; //holds ascii from serial line

void setup() 
{
  Serial.begin(9600);
  Serial.println("Hello I am alive");
  
  // All motor control pins are outputs
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
}

void loop()
{   
  if (Serial.available())
  {
  val = Serial.read();
  Serial.println(val);
  if (val == 'w')
    {
      // turn on motor A
      digitalWrite(In1, HIGH);
      digitalWrite(In2, LOW);
      // set speed of motor A
      analogWrite(EnA, 200);
      // turn on motor B
      digitalWrite(In3, HIGH);
      digitalWrite(In4, LOW);
      // set speed of motor B
      analogWrite(EnB, 200);
    }
    else if(val == 's')
    {
      // turn on motor A
      digitalWrite(In1, LOW);
      digitalWrite(In2, HIGH);
      // set speed of motor A
      analogWrite(EnA, 200);
      // turn on motor B
      digitalWrite(In3, LOW);
      digitalWrite(In4, HIGH);
      // set speed of motor B
      analogWrite(EnB, 200);
    }
    else if(val == 'd')
    {
      // turn on motor A
      digitalWrite(In1, HIGH);
      digitalWrite(In2, LOW);
      // set speed of motor A
      analogWrite(EnA, 100);
      // turn on motor B
      digitalWrite(In3, LOW);
      digitalWrite(In4, HIGH);
      // set speed of motor B
      analogWrite(EnB, 100);
    }
    else if(val == 'a')
    {
      // turn on motor A
      digitalWrite(In1, LOW);
      digitalWrite(In2, HIGH);
      // set speed of motor A
      analogWrite(EnA, 100);
      // turn on motor B
      digitalWrite(In3, HIGH);
      digitalWrite(In4, LOW);
      // set speed of motor B
      analogWrite(EnB, 100);
    }
    else if(val == 'k')
    {
        digitalWrite(In1, LOW);
        digitalWrite(In2, LOW);  
        digitalWrite(In3, LOW);
        digitalWrite(In4, LOW);
    }
  }
}

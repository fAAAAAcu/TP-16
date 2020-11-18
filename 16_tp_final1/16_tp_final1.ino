  
#define 2 mot2_1
#define 4 mot2_2
#define 8 mot1_1
#define 7 mot1_2
#define 12 mot4_1
#define 13 mot4_2
#define 10 mot3_1
#define 11 mot3_2

#define 3 motor2
#define 5 motor1
#define 6 motor3
#define 9 motor4

#define A0 sen_mov

char BT_recibido;

void setup()
{
  	configurarPines();
  	configurarBT();
      
	Serial.begin(9800);
    Serial.setTimeout(50);  
}

void loop()
{ 
  
	switch (BT_recibido)
    {  
  		case 'w':
      		avanzar();
      		break;
      	case 's':
      		retroceder();
      		break;
      	case 'a':
      		girarIzq();
      		break;
      	case 'd':
      		girarDer();
      		break;
      	case 'n':
      		frenarInt();
      		break;
        case 'm':
      		frenarDesp();
      		break;
        case 'q':
      		girarIzqEnSuEje();
      		break;
        case 'e':
      		girarDerEnSuEje();
      		break;
	}
}


void serialEvent()
{
  	while(Serial.available())
    {
      BT_recibido = Serial.read();
	}  
    Serial.flush();     
}


/////////////////

void configurarPines()
{  
	for(int pin = 2;13;pin++)
    {  
		pinMode(pin , OUTPUT);
	}
  	pinMode(sen_mov,INPUT);
  
}

void configurarBT()
{
 
 	 if (BT.available())
 	 {
 	   Serial.write(BT.read());
 	 }  
	 if (Serial.available())
	 {
	   BT.write(Serial.read());
	 }  
}  

void avanzar()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 255  ,  255  ,  255  ,  255  ,   1   ,   0  ,   0  ,   1  ,  1   ,   0  ,   0  ,  1   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}

void retroceder()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 255  ,  255  ,  255  ,  255  ,   0   ,   1  ,   1  ,   0  ,  0   ,   1  ,   1  ,  0   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}


void frenarInt()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 255  ,  255  ,  255  ,  255  ,   1   ,   1  ,   1  ,   1  ,  1   ,   1  ,   1  ,  1   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}

void frenarDesp()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 255  ,  255  ,  255  ,  255  ,   0   ,   0  ,   0  ,   0  ,  0   ,   0  ,   0  ,  0   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}

void giroDer()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 170  ,  170  ,  170  ,  170  ,   0   ,   0  ,   0  ,   1  ,  0   ,   0  ,   0  ,  1   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}

void giroIzq()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 170  ,  170  ,  170  ,  170  ,   0   ,   1  ,   0  ,   0  ,  0   ,   1  ,   0  ,  0   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}

void giroDerEnSuEje()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 0    ,  0    ,  0    ,  0    ,   1   ,   0  ,   0  ,   1  ,  1   ,   0  ,   0  ,  1   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}

void giroIzqEnSuEje()
{
  	String motor[] = {motor1, motor2, motor3, motor4, mot2_1,mot2_2,mot1_2,mot1_1,mot3_1,mot3_2,mot4_2,mot4_1};
  	int estado[]   = { 0    ,  0    ,  0    ,  0    ,   0   ,   1  ,   1  ,   0  ,  0   ,   1  ,   1  ,  0   };
  
  	for(int i=0;  ;i++)
    {
      	analogWrite(motor[i],estado[i]);
  		digitalWrite(motor[i],estado[i]);
  	}
}


bool leerMovimiento()
{
  
}

void comunicacion()
{

}  
  

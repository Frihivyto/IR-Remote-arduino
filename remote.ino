#include <IRremote.h>
#include <string.h>

const long KEY_UP = 0xFF629D;
const long KEY_LEFT = 0xFF22DD;
const long KEY_OK = 0xFF02FD;
const long KEY_RIGHT = 0xFFC23D;
const long KEY_DOWN = 0xFFA857;
const long KEY_1 = 0xFD08F7;
const long KEY_2 = 0xFD8877;
const long KEY_3 = 0xFD48B7;
const long KEY_4 = 0xFD28D7;
const long KEY_5 = 0xFDA857;
const long KEY_6 = 0xFD6897;
const long KEY_7 = 0xFD18E7;
const long KEY_8 = 0xFD9867;
const long KEY_9 = 0xFD58A7;
const long KEY_0 = 0xFD30CF;
const long KEY_ASTERISK = 0xFF42BD;
const long KEY_POUND = 0xFF52AD;
const long KEY_REPEAT = 0xFFFFFFFF;
String lastKey="KEY_REPEAT";
const int receptor = 11;


IRrecv irrecv(receptor);
decode_results codigo; //OBJETO CODIGO DE CLASE decode_result, oriundo de IRremote.h
 
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // INICIA LA RECEPCIÓN
  
  Serial.println(0xFD30CF);
  Serial.println(KEY_1, HEX);  
}
 
void loop()
{
    
 if (irrecv.decode(&codigo)){
   
 //  Serial.println(codigo.value, HEX);
   switch (codigo.value)
      {
      case KEY_UP:
         Serial.println("KEY_UP");
         lastKey="KEY_UP";
         break;
      case KEY_LEFT:
         Serial.println("KEY_LEFT");
         lastKey="KEY_LEFT";
         break;
      case KEY_OK:
         Serial.println("KEY_OK");
         lastKey="KEY_OK";
         break;
      case KEY_RIGHT:
         Serial.println("KEY_RIGHT");
         lastKey="KEY_RIGHT";
         break;
      case KEY_DOWN:
         Serial.println("KEY_DOWN");
         lastKey="KEY_DOWN";
         break;
      case KEY_1:
         Serial.println("KEY_1");
         lastKey="KEY_1";
         break;
      case KEY_2:
         Serial.println("KEY_2");
         lastKey="KEY_2";
         break;
      case KEY_3:
         Serial.println("KEY_3");
         lastKey="KEY_3";
         break;
      case KEY_4:
         Serial.println("KEY_4");
         lastKey="KEY_4";
         break;
      case KEY_5:
         Serial.println("KEY_5");
         lastKey="KEY_5";
         break;
      case KEY_6:
         Serial.println("KEY_6");
         lastKey="KEY_6";
         break;
      case KEY_7:
         Serial.println("KEY_7");
         lastKey="KEY_7";
         break;
      case KEY_8:
         Serial.println("KEY_8");
         lastKey="KEY_8";
         break;
      case KEY_9:
         Serial.println("KEY_9");
         lastKey="KEY_9";
         break;
      case KEY_0:
         Serial.println("KEY_0");
         lastKey="KEY_0";
         break;
      case KEY_ASTERISK:
         Serial.println("KEY_ASTERISK");
         lastKey="KEY_ASTERISK";
         break;
      case KEY_POUND:
         Serial.println("KEY_POUND");
         lastKey="KEY_POUND";
         break;
      case KEY_REPEAT:
         Serial.println(lastKey);

         break;
      }
 	irrecv.resume();
 	}
}

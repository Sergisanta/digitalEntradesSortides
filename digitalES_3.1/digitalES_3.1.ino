/**********************************************************************************
**                                                                               ** 
**                            Projecte 3 / Programa 1                            **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int displayPin[]= {5,6,7,8,9,10,11};
int i = 0;
int j = 0;
byte num = 0;


//La funció Setup només s'executa un cop. Quan la placa s'encen o es fa reset.
void setup() {
  // Configració del pins de sortida
  for (i = 0; i<7; i++)
  {
    pinMode (displayPin[i], OUTPUT);
  }
  for(int j = 0; j < 7 ; j++)  // definir estat inicals sortides, mostren número 0
  { 
    digitalWrite(displayPin[j], 0);
  }
}


//La funció Loop es va repetin cada cop.
void loop() {
  for(int j = 0; j < 7 ; j++) 
  { 
    digitalWrite(displayPin[j], bitRead(num, j));
  }
    delay(1000);  
  
}

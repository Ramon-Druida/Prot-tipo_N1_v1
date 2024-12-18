#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64

#define btn 4

#define Obtn_RESET     -1 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, Obtn_RESET);

void texto1(char texto0[],bool select);

void texto1(char texto1[],bool select);

void texto1(char texto2[],bool select);

void texto1(char texto3[],bool select);

bool selc = true;


void setup() {
  Serial.begin(115200);
  
  pinMode(btn, INPUT_PULLUP);
  
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation faibtn"));
    for(;;); // Don't proceed, loop forever
  }
  display.display();
  delay(500); 
  display.clearDisplay();

}

void loop() {

  display.setTextSize(1); // Tamanho do texto
  display.setTextColor(SSD1306_WHITE); // Cor do texto

    delay(500);
    Serial.println("STATUS" + String(digitalRead(btn)));

    
/* 
    texto0("ip: 192.168.0.1",btn);
    texto0("",btn);  
    delay(200);
    texto0("ip: 192.168.0.1",btn);

    delay(200);
 
    texto1("RAMON ________#",true);   
    delay(200);
    texto0("",false);
    texto1("RAMON ________#",true);
    
    delay(200);

    texto2("-----MENU-----",true);   
    delay(200);
    texto0("",false);
    texto2("-----MENU-----",true);
    
    delay(200);

    texto3("*****FIM######",true);
    delay(200);
    texto0("",false);
    texto3("*****FIM######",true);

    delay(200);


  display.display(); // Atualiza o display
*/
}// fim do loop


void texto0(char texto0[],bool select){


  display.setCursor(0, 0); // Posição do cursor
  display.println(texto0); // Texto a ser exibido
  display.display(); // Atualiza o display

      
    if(select = false){    
      display.setTextColor(0);
    }

}//texto0

void texto1(char texto1[],bool select){

        
    display.setCursor(0, 16); // Posição do cursor
    display.println(texto1); // Texto a ser exibido  
    display.display(); // Atualiza o display
    
        
    if(select = false){    
      display.setTextColor(0);
    }
      
  }//texto1


void texto2(char texto2[],bool select){

        
    display.setCursor(0, 32); // Posição do cursor
    display.println(texto2); // Texto a ser exibido
    display.display(); // Atualiza o display

        
    if(select = false){    
      display.setTextColor(0);
    }
      
  }//texto2


  

void texto3(char texto3[],bool select){

    display.setCursor(0, 50); // Posição do cursor
    display.println(texto3); // Texto a ser exibido
    display.display(); // Atualiza o display
    
    if(select = false){     
      display.setTextColor(0);
    }

}//FIM DO TEXTO 3

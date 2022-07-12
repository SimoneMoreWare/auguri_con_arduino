#include <LiquidCrystal.h> //libreria per utilizzare a pieno le potenzialità del display
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //i digital pin utilizzati dal display LCD

#include "pitches.h" //libreria per utilizzare le note

//spartito della canzone happy birthday to you
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_G4, NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_AS4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_F4
};

//durata note
int noteDurations[] = {
  8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 4, 4, 8, 8, 4, 4, 4, 2, 
};

void setup() {
  lcd.begin(16,2);  // colonne e righe che compongono il display
  lcd.setCursor(0,0); //posiziono il cursore alla prima riga
  lcd.print("Tanti Auguri"); //sul display compare la scritta Tanti Auguri
  lcd.setCursor(0,1); //posiziono il cursore nella seconda riga
  lcd.print("Amico MIO"); //sul display compare la scritta Amico Mio

  pinMode (4, OUTPUT); //imposto il led rosso posizionato al pin digitale 4 come output
  pinMode (5, OUTPUT); //imposto il led bianco posizionato al pin digitale 5 come output
  pinMode (6, OUTPUT); //imposto il led verde posizionato al pin digitale 6 come output
}

void loop() {
 
  for (int thisNote = 0 ; thisNote < 25 ; thisNote++) { 
    int randomLight1 = random(4, 7); //tale istruzione genera un numero casuale tra 4 e 6
    int randomLight2 = random(4, 7); //tale istruzione genera un numero casuale tra 4 e 6
    int randomLight3 = random(4, 7); //tale istruzione genera un numero casuale tra 4 e 6
    
    digitalWrite (randomLight1, HIGH); //accensione di un LED Casuale
    digitalWrite (randomLight2, HIGH); //accensione di un LED Casuale
    
    digitalWrite (randomLight3, LOW); //spegnimento di un led casuale
    //digitalWrite (random(4, 7), LOW);
    
    int noteDuration = 1130/noteDurations[thisNote]; //durata note
    tone (2, melody[thisNote], noteDuration); //il buzzer produce un nota
    
    int pause = noteDuration * 1.275; 
    delay (pause); //intervallo di tempo tra due note
    
    noTone(2); //il buzzer non produce alcun suono

    
  }

  delay(3000);
    digitalWrite(4, LOW); //spengo il led rosso
    digitalWrite(5, LOW); //spengo il led bianco
    digitalWrite(6, LOW);//spengo il led verde
    

}

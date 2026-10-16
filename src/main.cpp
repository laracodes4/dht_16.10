#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <dht.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define pindht 19
#define tipodht DHT22
#define ledAm 15
#define ledVm 4
#define ledVd 18

DHT sensor(pindht, tipodht);

unsigned long marcoZero = 0;
int intensidade1 = 0;
int intensidade2 = 0;
int intensidade3 = 0;
bool aumento1;
bool aumento2;
bool aumento3;

void setup()
{
    lcd.init();
    lcd.backlight();
    Serial.begin(115200);
    sensor.begin();
    Serial.println("Teste de DHT22");
    pinMode(ledAm, OUTPUT);
    pinMode(ledVm, OUTPUT);
    pinMode(ledVd, OUTPUT);
}

void loop()
{
   

    // EXERCICIO 1 ----------------------------------

    //  lcd.setCursor (0, 0);
    //  lcd.print("Temp em C = ");
    //  lcd.print(tempC);
    //  lcd.setCursor (0, 1);
    //  lcd.print("Temp em F = ");
    //  lcd.print(tempF);
    //  lcd.setCursor (0, 2);
    //  lcd.print("Umidade = ");
    //  lcd.print(umidade);
    //  Serial.println("------------------------------");

    // EXERCICIO 2 ------------------------------------

    // unsigned long marcoAtual = millis();

    // if (marcoAtual = 3000);
    //  lcd.setCursor (0, 0);
    //  lcd.print("Temp em C = ");
    //  lcd.print(tempC);
    //  lcd.setCursor (0, 1);
    //  lcd.print("Temp em F = ");
    //  lcd.print(tempF);
    //  lcd.setCursor (0, 2);
    //  lcd.print("Umidade = ");
    //  lcd.print(umidade);
    //  marcoZero = marcoAtual;

    // EXERCICIO 3 -------------------------------------

    //  unsigned long marcoAtual = millis();

    //  lcd.setCursor (0, 0);
    //  lcd.print("Temp em C = ");
    //  lcd.setCursor (0, 1);
    //  lcd.print("Temp em F = ");
    //  lcd.setCursor (0, 2);
    //  lcd.print("Umidade = ");

    //  if (marcoAtual = 3000);
    //  lcd.setCursor (12, 0);
    //  lcd.print(tempC);
    //  lcd.setCursor (12, 1);
    //  lcd.print(tempF);
    //  lcd.setCursor (10, 2);
    //  lcd.print(umidade);
    //  marcoZero = marcoAtual;

    // EXERCICIO 1 ----------------------------

    //  analogWrite(ledAm, intensidade);
    //  analogWrite(ledAz, intensidade);
    //  analogWrite(ledVd, intensidade);

    //  intensidade += 5;

    //  if (intensidade == 255){
    //     intensidade = 0;
    //  }

    // EXERCICIO 2 ----------------------------

    //  Serial.println(intensidade);

    //  analogWrite(ledAm, intensidade);
    //  analogWrite(ledAz, intensidade);
    //  analogWrite(ledVd, intensidade);

    // if (intensidade == 0){
    //     aumento = true;
    // }

    // if (intensidade == 255){
    //     aumento = false;
    // }

    //  if (aumento == true){
    //     intensidade += 5;
    //  }
    //  else {
    //     intensidade -= 5;
    //  }

    //  delay (300);

    // EXERCICIO 3 -------------------------

    //  unsigned long marcoAtual = millis();

    //  Serial.println(intensidade);

    //  analogWrite(ledAm, intensidade);
    //  analogWrite(ledAz, intensidade);
    //  analogWrite(ledVd, intensidade);

    // if (marcoAtual - marcoZero >= 300){
    // if (intensidade == 0){
    //     aumento = true;
    // }

    // if (intensidade == 255){
    //     aumento = false;
    // }

    //  if (aumento == true){
    //     intensidade += 5;
    //  }
    //  else {
    //     intensidade -= 5;
    //  }
    //  marcoZero = marcoAtual;
    // }

    // EXERCICIO 4 deu errado ------------------------------------


    // unsigned long marcoAtual = millis();

    
    //  if (marcoAtual - marcoZero >= 1000)
    //  {
    //      if (intensidade1 <= 0)
    //      {
    //          aumento1 = true;
    //      }
        
    //      if (intensidade1 >= 255)
    //      {
    //          // aumento1 = false;
    //          intensidade1 = 255;
    //          aumento2 = true;
    //      }
        
    //      if (intensidade2 >= 255)
    //      {
    //          // aumento2 = false;
    //          intensidade2 = 255;
    //          aumento3 = true;
    //      }
        
    //      if (intensidade3 >= 255)
    //      {
    //          aumento3 = false;
    //      }

    //      if (intensidade3 <= 0)
    //      {
    //          aumento2 = false;
    //          intensidade3 = 0;
    //      }

    //     if (intensidade2 <= 0)
    //      {
    //          aumento1 = false;
    //          intensidade2 = 0;
    //      }
        
        
        
        
    //      if (aumento1 == true)
    //      {
    //          intensidade1 += 5;
    //      }
    //      else
    //     {
    //          intensidade1 -= 5;
    //      }
        
    //      if (aumento2 == true)
    //      {
    //          intensidade2 += 5;
    //      }
    //    else
    //     {
    //          intensidade2 -= 5;
    //      }
        
    //      if (aumento3 == true)
    //      {
    //          intensidade3 += 5;
    //      }
    //      else
    //      {
    //          intensidade3 -= 5;
    //      }
    //      marcoZero = marcoAtual;
        
    //     intensidade1 = constrain(intensidade1, 0, 255);
    //     intensidade2 = constrain(intensidade2, 0, 255);
    //     intensidade3 = constrain(intensidade3, 0, 255);

    //      analogWrite(ledAm, intensidade1);
    //      analogWrite(ledVm, intensidade2);
    //      analogWrite(ledVd, intensidade3);



    //      Serial.print("Int 1 = ");
    //      Serial.println(intensidade1);
    //      Serial.print("Int 2 = ");
    //      Serial.println(intensidade2);
    //      Serial.print("Int 3 = ");
    //      Serial.println(intensidade3);
    //  }

    // EXERCICIO 2 ----------------------------

    // ETAPA 1 ----------------------------

    float tempC = sensor.readTemperature();
    float tempF = sensor.readTemperature(true);
    float umidade = sensor.readHumidity();

    // unsigned long marcoAtual = millis();

    // if (marcoAtual - marcoZero == 3000){
    //     if (tempC > 27){
    //         analogWrite(ledVm, 255);
    //     }
    //     else {
    //       analogWrite(ledVm, 0);  
    //     }

    //     if (umidade > 62){
    //         analogWrite(ledAz, 255);
    //     }
    //     else {
    //         analogWrite(ledAz, 0);
    //     }

    //     Serial.print("Temp C:");
    //     Serial.println(tempC);
    //     Serial.print("Umidade: ");
    //     Serial.println(umidade);

    //     marcoZero = marcoAtual;

    // }

    // ETAPA 2 ----------------------------

//     intensidade1 = map(tempC, 25, 35, 0, 255);
//     intensidade2 = map(umidade, 48, 75, 0, 255);

//     intensidade1 = constrain(intensidade1, 0, 255);
//     intensidade2 = constrain(intensidade2, 0, 255);

//     unsigned long marcoAtual = millis();

//     if (marcoAtual - marcoZero == 3000){
//         analogWrite(ledAz, intensidade2);
//         analogWrite(ledVm, intensidade1);

//        marcoZero = marcoAtual; 

//        Serial.print("Temp C:");
//        Serial.println(tempC);
//        Serial.print("Umidade: ");
//        Serial.println(umidade);
// }
}
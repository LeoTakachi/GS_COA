#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);

const int LCD_LED = 13;

const int PIN_TEMP = A0;
const int PIN_LUZ  = A1;
const int PIN_VIB  = A2;

// Limites operacionais
const float TEMP_ALTA = 35.0;
const float TEMP_BAIXA = 10.0;

const int LUZ_ALTA = 900;
const int LUZ_BAIXA = 50;

const int VIB_MAX = 600;

void setup() {

  pinMode(LCD_LED, OUTPUT);
  digitalWrite(LCD_LED, HIGH);

  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("Iniciando!");

  Serial.begin(9600);

  delay(2000);
}

void loop() {

  // Coleta dos sensores
  int valorVib = analogRead(PIN_VIB);
 
  // Converte para graus celsius
  float tensao = analogRead(PIN_TEMP) * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100.0;

  int luminosidade = 1023 - analogRead(PIN_LUZ);

  // Verificacoes
  bool falhaTemp =
      (temperatura > TEMP_ALTA) ||
      (temperatura < TEMP_BAIXA);

  bool falhaLuz =
      (luminosidade > LUZ_ALTA) ||
      (luminosidade < LUZ_BAIXA);

  bool falhaVib =
      (valorVib > VIB_MAX);

  bool sistemaCritico =
      falhaTemp || falhaLuz || falhaVib;

  // LCD
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temperatura, 1);
  lcd.print("C");

  lcd.setCursor(9, 0);
  lcd.print("L:");
  lcd.print(luminosidade);

  lcd.setCursor(0, 1);

  if (sistemaCritico) {

    if (falhaTemp) {
      lcd.print("ALERTA TEMP");
    }
    else if (falhaLuz) {
      lcd.print("ALERTA LUZ");
    }
    else {
      lcd.print("ALERTA VIB");
    }

  } else {

    lcd.print("STATUS NORMAL");
  }

  // Telemetria
  Serial.print("{");

  Serial.print("\"temperatura\":");
  Serial.print(temperatura, 1);

  Serial.print(",\"luminosidade\":");
  Serial.print(luminosidade);

  Serial.print(",\"vibracao\":");
  Serial.print(valorVib);

  Serial.print(",\"status\":\"");

  if (sistemaCritico)
    Serial.print("ALERTA");
  else
    Serial.print("NORMAL");

  Serial.println("\"}");

  delay(1000);
}
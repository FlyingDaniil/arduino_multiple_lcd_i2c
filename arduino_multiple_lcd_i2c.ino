//подключаем библиотеки
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x26, 16, 2); //объявляем первый экран
LiquidCrystal_I2C lcd2(0x27, 16, 2); //объявляем второй экран

void setup() {
  lcd.init();  // инициалищируем первый экран
  lcd2.init(); // инициалищируем второй экран
  lcd.backlight(); //подсвктка первого экрана
  lcd2.backlight(); //подсвктка второго экрана

  //Устанавливаем курсор и печатаем на первом экране
  lcd.setCursor(0, 0);
  lcd.print("Hello, world!");
  lcd.setCursor(0, 1);
  lcd.print("First screen");

  //Устанавливаем курсор и печатаем на втором экране
  lcd2.setCursor(0, 0);
  lcd2.print("Hello, world!");
  lcd2.setCursor(0, 1);
  lcd2.print("Second screen");
}


void loop() {
}

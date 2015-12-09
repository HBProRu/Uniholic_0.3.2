// sensor and lcd per PCB Uniholic 0.3.2
OneWire ds(11);
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

// push buttons
const char  Button_up = A2;
const char  Button_dn = A3;
const char  Button_start = A0;
const char  Button_enter = A1;

// outputs
const int Pump = 8;
const int Heat = 9;
const int Buzz = 10;


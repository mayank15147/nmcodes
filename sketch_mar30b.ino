
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("terminal");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("cd Downloads");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.write("mkdir NM; cd NM");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("curl -o code.c 'https://raw.githubusercontent.com/mevdschee/2048.c/master/2048.c'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("gcc -o Least_Square_Fit code.c");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("nano");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("CHEERS YOUR WORK IS DONE .... Go to Downloads There is a directory named NM inside the directory run the Least_Square_Fit executable using following command from terminal './Least_Square_Fit' ");
  DigiKeyboard.delay(500);
  DigiKeyboard.write("Exiting this window in 10 Seconds...");
  DigiKeyboard.delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_X,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}

void loop() {
}

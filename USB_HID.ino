#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(3000); 

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Keyboard.print("cmd");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000); 

  Keyboard.print("echo MsgBox \"WARNING: Your system has been compromised by an unknown USB device!\", 48, \"SECURITY BREACH\" > %temp%\\alert.vbs & %temp%\\alert.vbs");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
}
#include "BLE.h"
/**Bluetooth**/
BLE BT;

void setup(void) {
  Serial.begin(115200);
  Serial.println("Serial Begin with version 2.0");
  Serial.println();
  
  Serial.print("HW v");
  Serial.print(HARDWARE_VERSION_MAJOR);
  Serial.print(".");
  Serial.println(HARDWARE_VERSION_MINOR);
  
  Serial.print("SW v");
  Serial.print(SOFTWARE_VERSION_MAJOR);
  Serial.print(".");
  Serial.print(SOFTWARE_VERSION_MINOR);
  Serial.print(".");
  Serial.println(SOFTWARE_VERSION_PATCH);
  
  BT.begin("ESP32 OTA Updates");
}

void loop(void) {
  
}

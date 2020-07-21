
// NODEMCU
//#include <ESP8266WiFi.h>
#include <Arduino.h>


//* Push Notification OneSignal
#include "OneSignal.h"
// Replace with your own OneSignal App ID
#define OS_APP_ID ""
#define OS_APP_KEY ""
OneSignal onesignal(OS_APP_ID,OS_APP_KEY);

void SendNotif(){
  // Build & send a push notification
  OSNotification notif;
  notif.contents = "Hello, World!";
  notif.headings = "Test Title";
  notif.url = "https://www.google.com";

  Serial.println("Built notification, building audience");
  OSAudience audience("");
  
  String result = onesignal.sendNotificationToAudience(notif,audience);
  
  Serial.println("Sent with result:");
  Serial.println(result);
}

void setup() {
  
}

void loop() {
  // No-op
}

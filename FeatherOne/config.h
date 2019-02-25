// Physical device information for board and sensor
#define DEVICE_ID             WiFi.macAddress()     // already configured
#define DEVICE_STUDENT        "TolgaFeatherOne"
#define DEVICE_TYPE           "tempSensor"
#define DEVICE_LOCATION_LAT   "59.390548"
#define DEVICE_LOCATION_LON   "17.923066"      
#define DEVICE_SEND_INTERVAL 617143           //default 3600000 ms = 1 hour

#define WIFI_SSID             "IoT"
#define WIFI_PASS             "IoT2018!"

//#define WIFI_SSID             "IoT"
//#define WIFI_PASS             "IoT2018!"


//DHT Temperature sensor configuration
#define DHT_PIN               2
#define DHT_TYPE              DHT11


// Pin layout configuration
#define LED_PIN               0


// Address configuration, don't remove!
#define MESSAGE_MAX_LEN       256
#define EEPROM_SIZE           512
#define SSID_LEN              32
#define PASS_LEN              32
#define CONNECTIONSTRING_LEN  256

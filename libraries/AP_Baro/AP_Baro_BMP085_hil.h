
#ifndef __AP_BARO_BMP085_HIL_H__
#define __AP_BARO_BMP085_HIL_H__

#include "AP_Baro.h"

class AP_Baro_BMP085_HIL
{
  private:
    uint8_t BMP085_State;
    int16_t Temp;
    int32_t Press;

  public:
    AP_Baro_BMP085_HIL();  // Constructor
	//int Altitude;
	uint8_t oss;
	void init(AP_PeriodicProcess * scheduler);
	uint8_t read();
	int32_t get_pressure();
	int16_t get_temperature();
	float   get_altitude();
	int32_t get_raw_pressure();
	int32_t get_raw_temp();
	void setHIL(float Temp, float Press);
	int32_t _offset_press;
};

#endif //  __AP_BARO_BMP085_HIL_H__

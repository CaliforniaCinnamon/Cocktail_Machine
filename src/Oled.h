// Oled.h

#if 1
#pragma once

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Wire.h>
#include <SPI.h>

class Oled {
private:
	Adafruit_SSD1306 idisplay; // 그래픽 출력용 인스턴스

public:
	Oled();
	void display_bluetooth();
	void display_complete();
	void display_process(int i);
	void clear();
	void display_right(char* msg);
	void display_center(char* msg);
	void show();
};

#endif


/*
레퍼런스 링크
https://github.com/adafruit/Adafruit_SSD1306
https://github.com/adafruit/Adafruit-GFX-Library
*/
#include "Arduino.h"

extern "C" {
void spiffs_hal_init();
int spiffs_hal_read(uint32_t addr, uint32_t size, uint8_t *dst);
int spiffs_hal_write(uint32_t addr, uint32_t size, uint8_t *src);
int spiffs_hal_erase(uint32_t addr, uint32_t size);
}
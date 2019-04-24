#include "spi_flash.h"
#include "SPI.h"
SPIClass SPIflash(0,0,0,0,0);

extern "C" {
void spiffs_hal_init(){
    SPIflash.begin();
}
int spiffs_hal_read(uint32_t addr, uint32_t size, uint8_t *dst) {
    return 0;
}
int spiffs_hal_write(uint32_t addr, uint32_t size, uint8_t *src) {
    return 0;
}
int spiffs_hal_erase(uint32_t addr, uint32_t size) {
    return 0;
}
}
#pragma once
#include "USBSerial.h"
#include "BufferedSerial.h"
#include "config.h"
#include "eepromOrganizer.h"

#define appLauncher_DEBUG(x, ...)   //set as comment to enable debugging
#ifndef appLauncher_DEBUG
#define appLauncher_DEBUG(x, ...) printf("[appLauncher]\t" x "\r\n", ##__VA_ARGS__)
#endif

namespace Pulu {
    class AppLauncher {
        public:
            AppLauncher();

            void setSerial(BufferedSerial* bufferedSerial);
            void setSerial(USBSerial* usb);

            void launch();

        private:
            void clear_eeprom();
            void launch_serialListener();
            void launch_app();

        private:
            bool eeprom_valid;
            bool eeprom_error;
            Pulu::EEPROM_Config eeprom_config;

            BufferedSerial* bufferedSerial = nullptr;
            USBSerial* usb = nullptr;
    };
};
#pragma once

#include "simple-lorawan-config.h"

namespace Pulu {
    struct config {
        struct lorawan_config {
            SimpleLoRaWAN::LoRaWANKeys keys = { 
                { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },         // devEui
                { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },         // appEui
                { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 } // appKey
            };

            SimpleLoRaWAN::Pinmapping pins = { D11, D12, D13, A0, A1, D2, D3 };  // mosi, miso, clk, nss, reset, dio0, dio1
        } lorawan;
        struct eeprom {
            PinName sda = NC;
            PinName scl = NC;
            uint16_t address = 0;
        } eeprom;
    };
};